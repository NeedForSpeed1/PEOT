all:
	g++ -I src/Include -L src/lib -o startEngine VectorClass.cpp Particle.cpp main.cpp -lmingw32 -lSDL2main -lSDL2
