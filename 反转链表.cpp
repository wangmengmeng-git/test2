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

ListNode* reverseList(ListNode* head){
  ListNode* prev=nullptr;
  ListNode* cur=head;
  while(cur!=nullptr){
    ListNode*tem=cur->next;
    cur->next=prev;
    prev=cur;
    cur=tem;

  }
  return prev;
}
void print(ListNode* head){
  ListNode* curr=head;
  while(curr){
    cout<< curr->val<<" ";
    curr=curr->next;
  }
  cout<<endl;
}

ListNode* creatList(int arr[],int n){
  if (n==0)return nullptr;
//  new ListNode(arr[0])返回指针
  ListNode* head =new ListNode(arr[0]);
  ListNode* current=head;
  for (int i = 1; i < n; ++i) {
    current->next = new ListNode(arr[i]);
    current = current->next;
  }
  return head;

}
int main(){
  int arr[]={1,2,3,4,5};
  int n = sizeof(arr) / sizeof(arr[0]);
  ListNode* head=creatList(arr,n);

  // cout<<head->next->next->val;
  cout <<"yuanshi";
  print(head);
  ListNode* newhead=reverseList(head);
  cout <<"hou";
  print(newhead);
  return 0;

}
