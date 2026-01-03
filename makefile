prog : 1_3_26.o person.o student.o 
	g++ -std=c++11 -o prog 1_3_26.o person.o student.o 

1_3_26.o : person.h student.h 
	g++ -std=c++11 -c 1_3_26.cpp

person.o : person.h
	g++ -std=c++11 -c person.cpp

student.o : student.h
	g++ -std=c++11 -c student.cpp


clean:
	rm -f *.o
	rm prog