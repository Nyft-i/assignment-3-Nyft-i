assignment-3.exe: assignment-3.o particle.o detector.o
	g++ -o assignment-3.exe assignment-3.o particle.o detector.o -std=gnu++17

assignment-3.o: assignment-3.cpp
	g++ -c assignment-3.cpp -std=gnu++17

particle.o: particle.cpp particle.h
	g++ -c particle.cpp -std=gnu++17

detector.o: detector.cpp detector.h
	g++ -c detector.cpp -std=gnu++17
