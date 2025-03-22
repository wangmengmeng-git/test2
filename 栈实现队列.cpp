//
// Created by 86178 on 2025/3/22.
//
#include <iostream>
#include<stack>
using namespace std;
class MyQueue{
private:
  stack <int> inStack;
  stack <int> outStack;

  void trans(){
    while(!inStack.empty()){
      outStack.push(inStack.top());
      inStack.pop();
    }
  }
public:
  MyQueue(){}
  void push(int x){
    inStack.push(x);
  }

  int pop(){
    if (outStack.empty()){
      trans();
    }
    int front =outStack.top();
    outStack.pop();
    return front;
  }
  int peek(){
    if (outStack.empty()){
      trans();
    }
    return outStack.top();
  }
  bool empty(){
    return inStack.empty()&&outStack.empty();
  }

//类和结构体写完要加分号
};
int main(){
  MyQueue queue;
  queue.push(1);
  queue.push(2);
  cout <<queue.peek()<<endl;
  cout<<queue.pop()<<endl;
  cout <<queue.peek()<<endl;
  cout<<boolalpha<<queue.empty();

}