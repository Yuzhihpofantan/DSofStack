main:main.o ArrayStack.o
	g++ main.o ArrayStack.o -o main
main.o:src/main.cpp
	g++ -c src/main.cpp
ArrayStack.o:src/ArrayStack.cpp
	g++ -c src/ArrayStack.cpp
# stack_init.o:src/stack_init.cpp
# 	g++ -c src/stack_init.cpp
clean:
	rm -rf *.o main
