main.o: main.cpp
	g++ -c -o main.o main.cpp
HW6.o: HW6.cpp
	g++ -c -o HW6.o HW6.cpp
hw: main.o HW6.o
	g++ -o hw HW6.o main.o -Wall
