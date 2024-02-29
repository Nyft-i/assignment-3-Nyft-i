assignment-3.exe: assignment-3.o particle.o detector.o misc_funcs.o
	g++ -o assignment-3.exe assignment-3.o particle.o detector.o misc_funcs.o -std=gnu++17

assignment-3.o: assignment-3.cpp
	g++ -c assignment-3.cpp -std=gnu++17

particle.o: particle.cpp particle.h
	g++ -c particle.cpp -std=gnu++17

detector.o: detector.cpp detector.h
	g++ -c detector.cpp -std=gnu++17

misc_funcs.o: misc_funcs.cpp misc_funcs.h
	g++ -c misc_funcs.cpp -std=gnu++17
