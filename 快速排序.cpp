//
// Created by 86178 on 2025/3/21.
//
#include <iostream>
#include <algorithm>  // 引入头文件
using namespace std;
//传数组不能直接arr 可以arr[]或者int *arr
int partition(int arr[],int low,int high) {
    int pivot = arr[high];
    int i = (low -1);
    for (int j = low;j<=high-1;j++) {
        if (arr[j]<=pivot) {
            i++;
            swap(arr[j],arr[i]);

        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}
void quickSort(int *arr,int low,int high) {
    if (low<high) {
        int pi =partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
void printarr(int (&arr)[6],int size) {
    for (int i=0;i<size;i++)
        cout <<arr[i]<<" ";

    cout << endl;
}
int main() {
    int arr[]= { 10, 7, 8, 9, 1, 5 };
    int n=sizeof(arr)/sizeof(arr[0]);
    cout <<"before ";
    printarr(arr,n);
    cout << "after ";
    quickSort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}