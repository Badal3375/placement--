#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
// ! Question--> 1 Rearange the array such that all  positive or negative numbers are together
vector<int> rearange_array(vector<int>arr){
    int n = arr.size(); 
    int postIndex=0;
    int negaIndex=1;
    vector<int>ans(n,0);
     for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[negaIndex]=arr[i];
            negaIndex+=2;

        }
        else{
             ans[postIndex]=arr[i];
             postIndex+=2;

        }
        
      }
     return ans;

}
int main(){
    vector<int>arr={1,-1,4,-8,6,-8,-4,7,10};
         rearange_array(arr);
         for (int i = 0; i < arr.size(); i++) 
          cout << arr[i] << " ";

               return 0;
}