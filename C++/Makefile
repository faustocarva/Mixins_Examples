all: mixins

mixins: main.o 
	g++ -I. -o mixins main.o -lboost_system -lboost_timer

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -rf mixins *.o *.*~
