#include <bits/stdc++.h>
using namespace std;
class badal
{

    private :
     int a;
     public :
    string s = "badal";
    int b;
    char ch = 'b';
     void set(int a ){
        a =a;
     }
     int get_A(){
        return a*a;
     }
};
 
int main()
{
badal b1;
int a ;
 
cout<<b1.s<<endl;
 
 cout<<b1.set(5)<<endl;
 cout<<b1.get_A()<<endl;
    
     
     
}