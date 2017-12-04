#include "ArrayStack.h"
#include <iostream>

template <class T>
ArrayStack<T>::ArrayStack(){
  arraysize=20;
  array= new T[arraysize];

}
template <class T>
ArrayStack<T>::ArrayStack(int size){
  arraysize=size;
  array= new T[arraysize];

}

template <class T>
ArrayStack<T>::~ArrayStack(){
  delete [] array;
}

template <class T>
void ArrayStack<T>::push(T &t){

  if(stack<T>::size_cnt==arraysize){
    T *array2=new T[arraysize*2];
    memcpy(array2,array,arraysize*sizeof(T));
    arraysize+=arraysize;
    delete [] array;
    array=array2;
    delete [] array2;
  }

  array[stack<T>::size_cnt++]=t;

}

template <class T>
T ArrayStack<T>::top(){



  T a=array[stack<T>::size_cnt-1];

  return a;
}

template <class T>
T ArrayStack<T>::pop(){



    return array[--stack<T>::size_cnt];
  


}
template <class T>
bool ArrayStack<T>::StackIsempty(){
  if(stack<T>::size_cnt==0)
    return true;
  else
    return false;
}

template class ArrayStack<int>;
