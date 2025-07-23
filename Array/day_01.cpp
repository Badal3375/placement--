 #include<bits/stdc++.h>
using namespace std;
int max(int *arr,int n){
   int max = arr[0];
   for(int i=0;i<n;i++){
      if(arr[i]>max){
         max = arr[i];
 
      }
       
   }
    return max;
}
 
void revres_Array(int arr[],int n){
      int start=0;
      int end=n-1;
       for(int i=0;i<n;i++){
          while(start<end){
            swap(arr[start],arr[end]);
          }
          start++;
          end--;
       }
}
int main(){
   int n;
   int arr[]={1,5,6,8,7,9};
  // int ans=max(arr,n);
  // cout<<ans<<endl;
   revres_Array(arr,n);
   for(int i=0;i<n;i++){
      cout<<arr[i]<<"";
   }
    
}