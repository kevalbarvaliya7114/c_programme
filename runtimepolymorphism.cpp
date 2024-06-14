#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void Hello()
    {
        cout<<"Base class Hello Function"<<endl;
    }
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
    Base *p,b;
    Derived d;
    p=&b;
    p->Hello();
    p=&d;
    p->Hello();
}