#include<iostream>

using namespace std;

class students{

    private:
    int admno;
    char sname[20];
    float eng,math,sci;
    float total;
    float ctotal(float eng,float math,float sci);

    public:
    float takedata();

    void setdata();
    void printdata(){
        cout<<"enter the admission no.:";
        cin>>admno;
        cout<<"enter the name:";
        cin>>sname;
        cout<<"enter marks of english:";
        cin>>eng;
        cout<<"enter marks of maths:";
        cin>>math;
        cout<<"enter marks of science:";
        cin>>sci;


    }

};
int main(){
    class students s1;
    

}