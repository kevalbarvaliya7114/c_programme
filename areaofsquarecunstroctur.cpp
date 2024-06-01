#include<iostream>
using namespace std;

class area{
    public:
    area(int a){
        cout<<"Answer of A is :"<<a*a<<endl;
    }
};

int main(){
    area b(10);
    return 0;   
}