#include<iostream>

using namespace std;

int main(){
    int a;
    int b;

    cout << "enter the value of a:";
    cin >> a;
    cout << "enter the value of b:";
    cin >> b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout << "the value of a is :" << a << endl;
    cout << "the value of b is :" << b << endl;

}