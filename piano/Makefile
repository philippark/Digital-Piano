all: compile link

compile:
	g++ -c main.cpp -IC:\sfml\src\include -I:
	g++ -c SoundCapture.cpp -IC:\sfml\src\include -I:


link:
	g++ main.o -o main -LC:\sfml\src\lib -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio 
	g++ SoundCapture.o -o SoundCapture -LC:\sfml\src\lib -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio 

clean:
	rm -f main *.o