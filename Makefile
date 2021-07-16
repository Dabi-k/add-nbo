add-nbo: add-nbo.o
	gcc add-nbo.o -o add-nbo

add-nbo.o: add-nbo.cpp
	gcc -c add-nbo.cpp