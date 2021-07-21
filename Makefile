snake: snake.cpp
	g++ snake.cpp -lGL -lGLU -lglut -o snake
clean:
	rm *.o snake