#include<iostream>
using namespace std;
class Base
{
    // public:
    // virtual void Hello()
    // {
    //     cout<<"Base class Hello Function"<<endl;
    // }
    virtual void Hello()= 0;
};

class Derived : public Base{
    public:
    void Hello()
    {
        cout<<"Derived class Hello Function"<<endl;
    }
};

int main()
{
    Base *p;
    Derived d;
    d.Hello();
}