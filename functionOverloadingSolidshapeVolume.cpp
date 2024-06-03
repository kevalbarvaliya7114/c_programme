#include<iostream>
using namespace std;

class Cube{
    public:
    int cube(int a){
        cout<<"cube of v:"<<a*a*a<<endl;
    }
};

int main(){
    class Cube c;
    c.cube(10);
    return 0;
}