#include <bits/stdc++.h>
using namespace std;
class badal
{
     public :
    string s = "badal";
    int a;
    int b;
    char ch = 'b';
 
};
class badal1 :badal{
    public:
    int detail(int a,int b,char ch){
    int a;
    int b;
    char ch = 'b'; 
    }
    
    void display(){
        cout<<"the name is badal singh "<<endl;
    }
};
int main()
{

    
     badal1 b1;
     b1.detail(10,25,'A');
     b1.display();
     
}