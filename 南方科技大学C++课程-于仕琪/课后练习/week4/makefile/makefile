# compiling 
#hello:main.cpp factorial.cpp printhello.cpp
#	g++ -o hello main.cpp factorial.cpp printhello.cpp

CC = g++
target = hello
obj = main.o factorial.o printhello.o
$(target):$(obj)
	$(CC) -o $(target) $(obj)
main.o:main.cpp
	$(CC) -c main.cpp
printhello.o:printhello.cpp
	$(CC) -c printhello.cpp
factorial.o:factorial.cpp
	$(CC) -c factorial.cpp