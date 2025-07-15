#include<bits/stdc++.h>
using namespace std;
int Max_Min(int arr[],int n){
    int max=0 ;
    int min =0;
    for(int i=1;i<n;i++){
        max+=arr[i];
       
    }
    for(int i=0;i<n-1;i++){
        min+=arr[i];
       
    }
     
    //if(max>min){
    //    return max-min;
    //}
    //else{
    //    return min-max;
    //}
      return abs(max-min);
}
int main(){
    int arr[]={11,2,4,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=Max_Min(arr,n);
    cout<<ans<<endl;
}