prog : 1_4_26.o person.o student.o progression.o arithProg.o FibonacciProg.o geomProg.o
	g++ -std=c++11 -o prog 1_4_26.o person.o student.o progression.o arithProg.o FibonacciProg.o geomProg.o

1_4_26.o : person.h student.h progression.h arithProg.h FibonacciProg.h geomProg.h
	g++ -std=c++11 -c 1_4_26.cpp

person.o : person.h
	g++ -std=c++11 -c person.cpp

student.o : student.h
	g++ -std=c++11 -c student.cpp

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