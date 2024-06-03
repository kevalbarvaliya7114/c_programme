             // Polymorphism...
             // Function overloading...

#include<iostream>
using namespace std;

class Test{
    public:
    int hello()
    {
        cout<<"Basic Function Called..."<<endl;
    }
    int hello(int a)
    {
        cout<<"Value of a is: "<<a<<endl;
    }
    int hello(int a, int b)
    {
        cout<<"product of a and b is: "<<a*b<<endl;
    }
    int hello(int a, int b, int c)
    {
        cout<<"Addition of a,b and c is: "<<a+b+c<<endl;
    }
};
int main(){
    class Test t;
    t.hello();
    return 0;
}