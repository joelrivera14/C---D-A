prog : creditCardTest.o counter.o passanger.o creditCard.o
	g++ -std=c++11 -o prog creditCardTest.o counter.o passanger.o creditCard.o

creditCardTest.o : counter.h passanger.h creditCard.h
	g++ -std=c++11 -c creditCardTest.cpp

counter.o : counter.h
	g++ -std=c++11 -c counter.cpp

passanger.o : passanger.h
	g++ -std=c++11 -c passanger.cpp

creditCard.o : creditCard.h
	g++ -std=c++11 -c creditCard.cpp


clean:
	rm -f *.o
	rm prog