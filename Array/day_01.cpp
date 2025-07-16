 #include<iostream>
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
 
int main(){
   int n;
   int arr[]={1,5,6,8,7,9};
   int ans=max(arr,n);
   cout<<ans<<endl;
   
}