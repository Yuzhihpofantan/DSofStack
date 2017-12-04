#include <iostream>
#include "ArrayStack.h"
// #include "stack.h"


int main() {
    int var=20;
    int *ptr =&var;
    ArrayStack<int> *a=new ArrayStack<int>(2);
    int b=2;
    int c=3;
    a->push(c);
    std::cout << "before push "<< a->top() << '\n';
    a->push(b);
    std::cout << "after  push "<< a->top() << '\n';
    while(!(a->StackIsempty())){
      std::cout << "after  pop "<< a->pop() << '\n';
    }
    std::cout << "Stack is empty "<< '\n';


    delete a;
    return 0;
}
