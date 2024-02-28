assignment-3.exe: assignment-3.o particle.o
	g++ -o assignment-3.exe assignment-3.o particle.o -std=gnu++17

assignment-3.o: assignment-3.cpp
	g++ -c assignment-3.cpp -std=gnu++17

particle.o: particle.cpp particle.h
	g++ -c particle.cpp -std=gnu++17
