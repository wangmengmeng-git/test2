#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;


            }
        }
    }
}
int main(){
  int arr[]={ 64, 34, 25, 12, 22, 11, 90 };
  int n=sizeof(arr)/sizeof(arr[0]);
  cout <<"before";
  for (int i =0;i<n;i++){
    cout << arr[i] <<" ";

  }
  cout << endl;
  bubbleSort(arr,n);
  cout << "after" ;
  for(int i=0;i<n;i++){
    cout << arr[i] <<" ";

  }
  return 0;


}