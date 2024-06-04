#include<iostream>
using namespace std;

class Box{
    int l,w,h;
    public:
    void setData(int a, int b, int c)
    {
        l=a;w=b;h=c;
    }
    int getVolume()
    {
        return l*w*h;
    }
    Box operator+(Box &n)
    {
        Box t;
        t.l=l+n.l;
        t.w=w+n.w;
        t.h=h+n.h;
        return t;
    }
    Box operator++(int)
    {
        Box t;
        t.l=++l;
        t.w=++w;
        t.h=++h;
        return t;
    }
};

int main(){
    Box a,b,c,d;
    a.setData(2,2,2);
    b.setData(3,3,3);

    cout<<"Volume of A is:- "<<a.getVolume()<<endl;
    cout<<"Volume of B is:- "<<b.getVolume()<<endl;

    c=a+b;      // 5 5 5
    cout<<"Volume of C is:- "<<c.getVolume()<<endl;

    d=c++;      // 6 6 6
    cout<<"Volume of D is:- "<<d.getVolume()<<endl;


}