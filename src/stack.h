#ifndef STACK_H
#define  STACK_H


template <class T>
class stack{
protected:

  int size_cnt;
public:
  stack(){

    size_cnt=0;
    
  }
  stack(T &t){
    size_cnt=t;
  }
  int size(){
    return size_cnt;
  }
  // virtual void push(T&);
  // virtual T pop();
  // virtual T top();

};
#endif
