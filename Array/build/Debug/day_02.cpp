#include<bits/stdc++.h>
#include<vector>
using namespace std;
int remove_Element(vector<int>&arr){
    int n=arr.size();
     int count=1;
     sort(arr.begin(),arr.end());
     for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
           arr[count++]=arr[i];
        }
     }
      return count ;
}
void revres(vector<int>&arr){
   int n=arr.size();
    int start=0;
    int end=n-1;
    while(start<=end){
      swap(arr[start++],arr[end--]);
       
    } 
}
int main(){
    
  vector<int > arr={ 1,1,2,2,6,3,4,4,5,4,5,5};
   int ans=remove_Element(arr);
   for(int i=0;i<ans;i++){
         cout<< arr[i]<<" ";
    }
   arr= vector<int>(arr.begin(),arr.begin()+ans);
   cout<<endl;
   revres(arr); 
   for(int i=0;i<arr.size();i++){
   cout<< arr[i]<<" ";
}
}