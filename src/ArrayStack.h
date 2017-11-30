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

// #include "ArrayStack.cpp"/*
//                           fix template class problem
//                           修正範本物件在分離實作會無法找到類別的問題
//                           另有解法
//                         */
#endif
