#include <iostream>
#include "ArrayStack.h"
// #include "stack.h"
using namespace std;

int main() {
    int var=20;
    int *ptr =&var;
    ArrayStack<int> a(20);

    std::cout << a.size() << '\n';

    return 0;
}
