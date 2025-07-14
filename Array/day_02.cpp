#include <bits/stdc++.h>
using namespace std;
 int second_largest(vector<int>&arr,int n){
     int largest=arr[0];
     int sec_largest=-1;
      for(int i=1;i<n;i++){
          if(arr[i]>largest){
              sec_largest=largest;
              largest=arr[i];
          }
          else if(arr[i]<largest&&arr[i]>sec_largest){
                sec_largest=arr[i];
          }
      }
       return sec_largest;
 }
int second_smallest(vector<int>&arr,int n){
    int smallest=arr[0];
    int ssmallest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest&&arr[i]<ssmallest){
            ssmallest=arr[i];
            
        }
    }
     return ssmallest;
}
int main(){
    vector<int> arr={16,5,6,13,190,11,20,10};
    int n;
     int ans =second_largest(arr,8);
     cout<<"second largest "<<endl;
     cout<<ans<<endl;
     int ans1 =second_smallest(arr,8);
       cout<<"second smallest  "<<endl;
     cout<<ans1<<endl;
}

