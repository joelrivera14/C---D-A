prog: iterator.o
	g++ -std=c++11 -o prog iterator.o

iterator.o: iterator.cpp
	g++ -std=c++11 -c iterator.cpp

clean:
	rm -f *.o
	rm prog