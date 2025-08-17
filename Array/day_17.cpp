#include<bits/stdc++.h>
using namespace std;
int pailindrome(string & s){
    int n=s.size();
    int left=0;
    int right=n-1;
    while(left<right){
        if(s[left]!=s[right]){
             return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main(){

       string s="abab";
       cout<<pailindrome(s)<<endl;
    
}       