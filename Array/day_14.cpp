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
      for(int i=0;i<n-1;i++){
        int minIndex=i;
         for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                 minIndex=i;
            }
            swap(arr[i],arr[minIndex]);
         }
      }
}

/*
void merge(int arr[], int l, int m, int r) {
    int n1 = m-l+1, n2 = r-m;
    int L[n1], R[n2];
    left side of array 
    for(int i=0; i<n1; i++) 
    L[i] = arr[l+i];
    

    right side of array
    for(int j=0; j<n2; j++) 
    R[j] = arr[m+1+j];

    int i=0, j=0, k=l;
    while(i<n1 && j<n2)
    arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while(i<n1) 
    arr[k++] = L[i++];
    while(j<n2)
     arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r) {
    if(l < r) {
        int m = (l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
*/
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