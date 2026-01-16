prog : n.o genericSL.o 
	g++ -std=c++11 -o prog n.o genericSL.o

n.o : genericSN.h genericSL.h 
	g++ -std=c++11 -c n.cpp


genericSL.o : genericSL.h
	g++ -std=c++11 -c genericSL.cpp


clean:
	rm -f *.o
	rm prog