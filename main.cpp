#include <iostream>
#include "thc.h"

void display_position(thc::ChessRules &cr, const std::string &description)
{
    std::string fen = cr.ForsythPublish();
    std::string s = cr.ToDebugStr();
    printf("%s\n", description.c_str());
    printf("FEN (Forsyth Edwards Notation) = %s\n", fen.c_str() );
    printf("Position = %s\n", s.c_str());
}

int main() {
    std::cout<<"Starting the chess engine...\n";
    thc::ChessRules cr;
    display_position( cr, "Initial position" );
    thc::Move mv;
    mv.NaturalIn( &cr, "e4" );
    cr.PlayMove(mv);
    mv.NaturalIn( &cr, "e5" );
    cr.PlayMove(mv);
    mv.NaturalIn( &cr, "Nf3" );
    cr.PlayMove(mv);
    mv.NaturalIn( &cr, "Nc6" );
    cr.PlayMove(mv);
    mv.NaturalIn( &cr, "Bc4" );
    cr.PlayMove(mv);
    mv.NaturalIn( &cr, "Bc5" );
    cr.PlayMove(mv);
    display_position( cr, "Starting position of Italian opening, after 1.e4 e5 2.Nf3 Nc6 3.Bc4 Bc5" );
    return 0;
}
