#include<iostream>
using namespace std;
class Base1{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"Enter a:";
        cin>>a;
    }
};

class Base2{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"Enter b:";
        cin>>b;
    }
};
class derived : public Base1, public Base2
{
    public:
    void product()
    {
        cout<<"Product Of a and b is: "<<a*b<<endl;    
    }
};

int main(){
    derived d;
    d.setA();
    d.setB();
    d.product();
}

// student result
// 1 to 10 square