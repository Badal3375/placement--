#include<bits/stdc++.h>
using namespace std;
void union_set(int arr1[],int n,int arr2[],int m){
     sort(arr1,arr1+n);
     sort(arr2,arr2+m);
    int i=0,j=0;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            cout<<arr1[i++]<<" ";
        }
        else if(arr2[j]<arr1[i]){
            cout<<arr2[j++]<<" ";
        }
         else{
             cout<<arr2[j++]<<" ";
             i++;
         }
         while(i<n){
             cout<<arr1[i++]<<" ";
         }
          while(j<m){
              cout<<arr2[j++]<<" ";
          }
    }
}
int main(){
    int arr1[]={1,5,0, 1,2,3};
    int arr2[]={1,5,6,4,3,1};
    int n=sizeof(arr1)/sizeof(arr2[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    union_set(arr1,n,arr2,m);
}