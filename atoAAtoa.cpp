#include<iostream>
using namespace std;
int main(){
    char name;
    cout<<"enter the character:";
    cin>>name;

    if(name >=65 && name<=90){
        cout<< char (name+32);
    }else if(name>=97 && name<=122){
        cout<< char (name-32);
    }
}