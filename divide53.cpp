#include<iostream>

using namespace std;

int main(){
    int a;

    cout << "enter the number:";
    cin >> a;

    if(a%5==0 && a%3==0){
        cout<< "the value is divisible by 5 or 3";
    }else{
        cout<< "the value is not divisible by 5 or 3";
    }
}