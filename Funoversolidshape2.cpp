#include<iostream>
using namespace std;

class Cube{
    public:
    int cylinder(int r,int h){
        cout<<"cylinder of v:"<<3.14*(r*r)*h<<endl;
    }
    int prism(int B,int h){
        cout<<"prism of v:"<<B*h<<endl;
    }
    int capsule(int r,int a){
        cout<<"capsule of :"<<(3.14*(r*r)*((1.33)*r+a
        
        
        ))<<endl;
    }
};

int main(){
    class Cube c;
    c.cylinder(10,5);
    c.prism(20,10);
    c.capsule(3,6);
    return 0;
}