#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <memory>
#include "stack.h"

template <class T>
class ArrayStack:public stack<T>{
protected:
  T *array;
  int arraysize;

public:
  ArrayStack();
  ArrayStack(int size);
  ~ArrayStack();
  void push(T&);
  T pop();
  T top();
};

// #include "ArrayStack.cpp"
void init_class();
#endif
