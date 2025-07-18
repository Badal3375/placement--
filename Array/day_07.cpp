#include <bits/stdc++.h>
#include <vector>
using namespace std;
// Question -3 three sum of the array
int three_Sum(vector<int> arr, int target)
{
    int n = arr.size();
    int sum = 0;
    for(int i = 0; i < n - 2; i++){
         for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                sum=arr[i]+arr[j]+arr[k];
            }
            if(sum==target){
               return 1;
            }
         }

    }
       return 0;
}
int main()
{
    vector<int> arr = {1, 5, 2, 3, 4, 6};
    int sum = 0;
    int target;
    cin>>target;
    int ans= three_Sum(arr, target);
    cout<<ans<<endl;
}