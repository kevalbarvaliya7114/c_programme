#include<iostream>
using namespace std;

class students{
    private:
    int a;
    int b;

    public:
    students(int a1,int b1){
        a=a1;
        b=b1;
    }
    ~students(){
        // cout<<a<<endl<<b<<endl;
        cout<<"value destroyed"<<endl;
    }
    void displaydata(){
        cout<<"a is:-"<<a<<endl;
        cout<<"b is:-"<<b<<endl;
    }
};

int main(){
    students s1(10,20);
    s1.displaydata();
    return 0;   
}