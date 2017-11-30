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
    a->pop();
    std::cout << "after  pop "<< a->top() << '\n';
    a->pop();
    std::cout << "after  secondpop "<< a->top() << '\n';
    a->pop();
    std::cout << "after  thirdpop "<< a->top() << '\n';
    delete a;
    return 0;
}
