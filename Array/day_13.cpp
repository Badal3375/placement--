////  Question ->1 
//Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
//
// 
//
//Example 1:
//
//Input: nums = [1,2,3,4,5,6,7], k = 3
//Output: [5,6,7,1,2,3,4]
//Explanation:
//rotate 1 steps to the right: [7,1,2,3,4,5,6]
//rotate 2 steps to the right: [6,7,1,2,3,4,5]
//rotate 3 steps to the right: [5,6,7,1,2,3,4]
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n=nums.size();
         k%=n;
       reverse(nums.begin(),nums.end());
       reverse(nums.begin(),nums.begin()+k);
       reverse(nums.begin()+k,nums.end());
    }
};
int main(){
  Solution s;
  vector<int> nums={1,2,3,4,5,6,7};
  int k=6;
  s.rotate(nums,k);
  for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
   }
   cout<<endl;
}