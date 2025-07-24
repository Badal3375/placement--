#include<bits/stdc++.h>
using namespace std;
class A{
    int a=10;
    public:
    void set_data(int a ){
        this->a=a;
    }
    void display_data(){
        cout<<a<<endl;
    }
    int b = 20;
    char ch='a';
    string c="badal";
   // parnmeterized constructor
    

};
  
int main(){

    A a1 ;
    //static slloction of member variable
    a1.set_data(100);
    a1.display_data();
     cout<<a1.b<<endl;
     cout<<a1.c<<endl;
     cout<<a1.ch<<endl;
        
     // dynamic allocation of member variable
     A* a2=new A();
     a2->set_data(200);
    a2->display_data();
     cout<<a2->b<<endl;
     cout<<a2->c<<endl;
    cout<<a2->ch<<endl;
    
}
  