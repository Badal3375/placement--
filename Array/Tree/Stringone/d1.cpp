#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="badal";
    cout<<"  string "<<s<<endl;
       int start=0;
     int end=s.size()-1;
      while(start<end){
         swap(s[start],s[end]);
         start++;
            end--;
      }
       cout<<"  string "<<s<<endl;
}
