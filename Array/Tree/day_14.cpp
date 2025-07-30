#include<bits/stdc++.h>
using namespace std;
// Question ->1 Bubble sort  
void bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
// Question ->2 Selection sort
void selection_sort(int arr[],int n){
      for(int i=1;i<n-1;i++){
        int minIndex=i;
         for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                 minIndex=i;
            }
            swap(arr[i],arr[minIndex]);
         }
      }
}
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    int arr[]={1,5,2,7,3,9};
    n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<" the bubble sort "<<endl;
    bubble_sort(arr, n);
 
    print_array(arr,n);
    cout<<endl;
    cout<<" the selection  sort "<<endl;
    selection_sort(arr, n);
    print_array(arr,n);
   
}