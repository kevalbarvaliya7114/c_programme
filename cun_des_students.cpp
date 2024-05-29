#include<iostream>
using namespace std;

class students{
    private:
    int a;
    int b;

    public:
    students(int m,int n){
        cout<<"parameter:"<<endl;
        a=m;
        b=n;
    }
    ~students(){
        cout<<a<<endl<<b<<endl;
        cout<<"default"<<endl;
    }
};
int main(){
    students s1(50,70);
    return 0;
}