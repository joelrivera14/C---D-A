prog : n.o stringNode.o stringLinkedList.o 
	g++ -std=c++11 -o prog n.o stringNode.o stringLinkedList.o

n.o : stringNode.h stringLinkedList.h 
	g++ -std=c++11 -c n.cpp

stringNode.o : stringNode.h
	g++ -std=c++11 -c stringNode.cpp

stringLinkedList.o : stringLinkedList.h
	g++ -std=c++11 -c stringLinkedList.cpp


clean:
	rm -f *.o
	rm prog