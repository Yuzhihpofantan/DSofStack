main:main.o stack_init.o
	g++ main.o stack_init.o -o main
main.o:src/main.cpp
	g++ -c src/main.cpp
stack_init.o:src/stack_init.cpp
	g++ -c src/stack_init.cpp
clean:
	rm -rf main.o stack_init.o main
