prog : 12_28_25.o counter.o passanger.o
	g++ -std=c++11 -o prog 12_28_25.o counter.o passanger.o

12_28_25.o : counter.h passanger.h
	g++ -std=c++11 -c 12_28_25.cpp

counter.o : counter.h
	g++ -std=c++11 -c counter.cpp

passanger.o : passanger.h
	g++ -std=c++11 -c passanger.cpp

clean:
	rm -f *.o
	rm prog