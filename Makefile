run:
	g++ -w main.cpp thc.cpp -o main.o; ./main.o

clean:
	rm -f *.o
