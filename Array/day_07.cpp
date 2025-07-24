#include <bits/stdc++.h>
#include <vector>
using namespace std;
// Question -1  three sum of the array
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
//Question -2 sales by match
int sockMerchant(int n, vector<int> ar) {
     unordered_map<int, int> colorCount;
    int pairs = 0;

    
    for (int i = 0; i < n; i++) {
        colorCount[ar[i]]++;
    }

    
    for (auto pair : colorCount) {
        pairs += pair.second / 2;
    }

    return pairs;
} 
//Question -3 
int main()
{
    vector<int> arr = {1, 5, 2, 3, 4, 6};
    int sum = 0;
    int target;
    cin>>target;
    int ans= three_Sum(arr, target);
    cout<<ans<<endl;
}