//
// Created by 86178 on 2025/3/22.
//
#include <iostream>
using namespace std;
struct ListNode{
  int val;
  ListNode* next;
  ListNode(int x):val(x),next(nullptr){}
};
ListNode* cre(int arr[],int n){
  if (n == 0) return nullptr;
  ListNode* head=new ListNode(arr[0]);
  ListNode* cur=head;
  for (int i=1;i<n;i++){
    cur->next=new ListNode(arr[i]);
    cur=cur->next;

  }
  return head;
}
void print(ListNode* head){
  ListNode* cur =head;
  while(cur!=nullptr){

    cout <<cur->val<<" ";
    cur=cur->next;
  }
}
ListNode* del(ListNode* head ,int target){
  ListNode* dummyhead= new ListNode(0);
  dummyhead->next=head;
  ListNode*  cur=dummyhead;
  while(cur->next!=nullptr){
    if (cur->next->val==target){
      ListNode* temp=cur->next;
      cur->next=cur->next->next;
//      删除时，内存手动清理
      delete temp;
      temp=nullptr;
    }
    else{
//      不满足的要往前走
      cur=cur->next;
    }


  }
  ListNode* newhead =dummyhead->next;
  delete dummyhead;
  dummyhead=nullptr;
  return newhead;

}
int main(){
  int arr[] = {1, 2, 3, 2, 4, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  // 调用时直接写数组
  ListNode* head = cre(arr, n);
  int target=2;
  cout << "yuanshi ";
  print(head);
  head = del(head, target);
  cout << "hou: ";
  print(head);

  return 0;



}