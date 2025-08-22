#include<bits/stdc++.h>
using namespace std;

// left rotation 
 void solve(int *arr,int n){
       int temp=arr[0];
         for(int i=0;i<n-1;i++){
              arr[i]=arr[i+1];
         }
        arr[n-1]=temp;
         for(int i=0;i<n;i++){
             cout<<arr[i]<<" ";
         }
 }
 // Rotateto right  of array 

void Rotatetoright(int arr[], int n, int k)
{
  if (n == 0)
    return;
  k = k % n;
  if (k > n)
    return;
  int temp[k];
  for (int i = n - k; i < n; i++)
  {
    temp[i - n + k] = arr[i];
  }
  for (int i = n - k - 1; i >= 0; i--)
  {
    arr[i + k] = arr[i];
  }
  for (int i = 0; i < k; i++)
  {
    arr[i] = temp[i];
  }
}
int main(){
    int arr[]={1,2,4,5,9};
    int n= 5;
   // solve(arr,n);
   int k=4;
 Rotatetoright(arr, n, k);
  cout << "After Rotating the elements to right " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}