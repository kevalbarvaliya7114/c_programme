#include<iostream>
using namespace std;
class Base{
    public:
    Base()
    {
        cout<<"Base class constructer called"<<endl;
    }
    ~Base()
    {
        cout<<"Base class destructer called"<<endl;
    }
};

class Derived : public Base
{
    public:
    Derived(){
        cout<<"Derived class Constuctor called"<<endl;
    }
    ~Derived(){
        cout<<"Derived class Destuctor called"<<endl;
    }
};

int main(){
    Derived d;
}