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
    void takedata(){
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
    void showdata()
    {
        cout<<endl<<"\tAdmission no:"<<admno;
        cout<<endl<<"\tStudent name:"<<sname;
        cout<<endl<<"\teng:"<<eng;
        cout<<endl<<"\tmath:"<<math;
        cout<<endl<<"\tsci:"<<sci;
        cout<<endl<<"\tctotal :"<<ctotal(eng,math,sci)<<endl;;
    }

};

    float students::ctotal(float eng,float math,float sci){
        total=eng+math+sci;
        return total;
    }

int main(){
    class students s1;
    s1.takedata();
    s1.showdata();
    return 0;
}