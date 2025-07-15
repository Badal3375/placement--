#include<bits/stdc++.h>
using namespace std;
// find the  diffrence  between max and min of array  
int Max_Min(int arr[],int n){
    int max=0 ;
    int min =0;
    for(int i=1;i<n;i++){
        max+=arr[i];
       
    }
    for(int i=0;i<n-1;i++){
        min+=arr[i];
       
    }
     
     
      return abs(max-min);
 }
// find the fizzbizz problems in using conditinal statement of c++
void fizzbuzz_program(int n){
     
        if(n%3==0||n%5==0){
        cout<<"FizzBizz"<<endl;
    }
    else if(n%3==0||n%5!=0){
        cout<<"Fizz"<<endl;

    }
    else if(n%3!=0||n%5==0){
        cout<<"Bizz"<<endl;
    }
    else{
        cout<<n<<endl;
    }
    
}
int main(){
    int n;
    cin>>n;
    fizzbuzz_program(n);
    int arr[]={11,2,4,5,10};
  int n=sizeof(arr)/sizeof(arr[0]);
  int ans=Max_Min(arr,n);
  cout<<ans<<endl;
}