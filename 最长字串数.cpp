//
// Created by 86178 on 2025/3/22.
//
#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
unordered_map<char,int> map;
int longerstStr(string arr,int n){
int start=0;
int l2=0;
int l3=0;
int tem=0;

  for(int i=0;i<n;i++){

    if (map.find(arr[i])!=map.end()&&map[arr[i]]>=start){
      // longer= max({i-map[arr[i]],longer,tem});
      // longer= max(max(i-map[arr[i]],longer),tem);
      start=map[arr[i]]+1;
      l2=max(l2,tem);
      tem=0;
    }
    // else {
    //   tem++;
    // }
    l3=max(l3,i-start+1);
    map[arr[i]]=i;
  }
  return l3;
  // if (longer) {
  //   return longer;
  // }
  // else {
  //   return n;
  // }
}



int main(){
  string arr="adbfjjja";
  int n = arr.length();
  int a=longerstStr(arr,n);
  cout << a;


  return 0;
}
