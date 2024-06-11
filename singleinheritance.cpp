#include<iostream>
using namespace std;
class Base{
    int a;      // private
    protected:
    int b;
    public:
    int c;
};

class derived : public Base
{
    public:
    void hello()
    {
        Base :: b=15;   //SCOPE RESOLUTION (::)
        Base :: c=150;
        cout<<"value of B is :"<<b<<endl;   
        cout<<"value of C is :"<<c<<endl;
        cout<<"HELLO"<<endl;   
    }
};

int main(){
    derived d;
    d.c=11;
    cout<<"value of C is :"<<d.c<<endl;
    d.hello();
}

// student result
// 1 to 10 square