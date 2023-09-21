main:fib.o main.o
	g++ -o main fib.o main.o
fib.o:fib.cpp
	g++ -o fib.o -c fib.cpp
main.o:main.cpp
	g++ -o main.o -c main.cpp

clean:
	rm -f *.o main