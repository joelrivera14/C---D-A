prog : 1_5_26.o gameEntry.o Scores.o 
	g++ -std=c++11 -o prog 1_5_26.o gameEntry.o Scores.o

1_5_26.o : gameEntry.h Scores.h progression.h 
	g++ -std=c++11 -c 1_5_26.cpp

gameEntry.o : gameEntry.h
	g++ -std=c++11 -c gameEntry.cpp

Scores.o : Scores.h
	g++ -std=c++11 -c Scores.cpp

progression.o : progression.h
	g++ -std=c++11 -c progression.cpp

arithProg.o : arithProg.h
	g++ -std=c++11 -c arithProg.cpp

FibonacciProg.o : FibonacciProg.h
	g++ -std=c++11 -c FibonacciProg.cpp

geomProg.o : geomProg.h
	g++ -std=c++11 -c geomProg.cpp


clean:
	rm -f *.o
	rm prog