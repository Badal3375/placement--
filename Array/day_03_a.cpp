#include<bits/stdc++.h>
#include<vector>
using namespace std;
int remove_zero(vector<int>&arr){
    int n=arr.size();
    vector<int>temp;
    
     for(int i=0;i<n;i++){
         if(arr[i]!=0){
            temp.push_back(arr[i]); 
         }
     }
     int nt=temp.size();
     for(int i=0;i<nt;i++){
         arr[i]=temp[i];  
         
     }
      for(int i=nt;i<n;i++){
           arr[i]=0;
      }
       return arr[0];
}

//missing code here of the function 
int miss_number(vector<int>arr){
     int n=arr.size()+1;
     vector<int>hash(n+1,0);
      for(int i=0;i<n+1;i++){
          hash[arr[i]]++ ;
      }
       for(int i=1;i<=n;i++){
            if(hash[i]==0){
                return i;
            }
              
        }
        return -1;
 }
int main(){
    vector<int>arr={1,0,3,4,0,6,7,0,9};
      int ans=remove_zero(arr);
      for(int i=0;i<arr.size();i++){
          cout<<arr[i]<<" ";
      }
}