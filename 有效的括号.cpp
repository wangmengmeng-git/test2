//
// Created by 86178 on 2025/3/22.
//
#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isValid(const string &s){
  stack<char> stack;

  if (s.length()%2!=0) return false;
  for(char c : s){
    switch (c){
      case '(':
        stack.push(')');
        break;
      case '[':
        stack.push(']');
      break;
      case '{':
        stack.push('}');
      break;
      default:
        if (stack.empty()||stack.top()!=c){
          return false;
        }
        stack.pop();

    }

  }

  return stack.empty();

}
int main(){

  std::string test = "{[()]";
  if (isValid(test)) {
    std::cout << "you" << std::endl;
  } else {
    std::cout << "wu" << std::endl;
  }
  return 0;
}