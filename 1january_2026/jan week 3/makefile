prog : stack.o 
	g++ -std=c++11 -o prog stack.o

stack.o : arraystack.h 
	g++ -std=c++11 -c stack.cpp


clean:
	rm -f *.o
	rm prog