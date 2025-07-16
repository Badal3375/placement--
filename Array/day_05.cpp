#include<bits/stdc++.h>
#include<vector>
using namespace std;
//question 1 -> subArray_sum using loop to check all subarrays 
//between indexing of whole array 
 int subArray_sum( int arr[],int n,int sum){
    int curr_sum=0;
    int len=0;
    int i;
    for(int i=0;i<=n;i++){
        while(curr_sum>sum && len<i-1){
            curr_sum=curr_sum- arr[len];
            len++;
        }
         if(curr_sum==sum){
            cout<<"the sum found between index "<<len<<"  and "<<i-1<<endl;
            return 1;
         }
         if(i<n){
            curr_sum=curr_sum+arr[i];
            cout<<"the sum is "<<curr_sum<<endl;
         }
          
    }
    cout<<"this is not present "<<endl;
    return 0;
 }
//   Question -2  Two Sum Problem
int Two_Sum(int arr[],int n,int sum){
   int i;
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         if(arr[i]+arr[j]==sum){
             cout<<i<<" and "<<j<<endl;
         }
      }
       
   }
   return arr[0];

}
// Question 3 -> o's,1's and 2's count in array 
int count_element(vector<int>arr1){
     
    int count_0=0;
    int count_1=0;
    int count_2=0;
    for(int i:arr1){
        if(i==0)
        count_0++;
        
        else if(i==1)
        count_1++;
        
        else if(i==2)
        count_2++; 
        
    }
    
     cout<<"count of 0 "<<count_0<<endl;
     cout<<"count of 1 "<<count_1<<endl;
     cout<<"count of 2 "<<count_2<<endl;
      return 0; 
}
int main(){

 int arr[]={1,5,3,8,9,4,6};
 int n=sizeof(arr)/sizeof(arr[0]);
 int sum=15;
 //subArray_sum(arr,n,sum);
 // Two_Sum(arr,n,sum);
    vector<int>arr1={1,0,1,0,1,2,2,1,0,1};
     count_element(arr1);
    
    
}










  