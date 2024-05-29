#include<iostream>

using namespace std;

class report{
    private:
    int adno;
    char name[20];
    float marks[5];
    float avgmark;
    float getavg(float marks[5]);

    public:
    void readinfo(){
        cout<<"Enter the admission no.:";
        cin>>adno;
        cout<<"Enter the name:";
        cin>>name;

        for(int i=0;i<5;i++){
          cout<<"Enter the marks:"<<i+1<<":-";
            cin>>marks[i];
            avgmark=getavg(marks);
        }
    }
    void displayinfo(){
        cout<<"admission no.:"<<adno<<endl;
        cout<<"name:"<<name<<endl;
        for(int i=0;i<5;i++){
            cout<<"mark"<<i+1<<":-"<<marks[i]<<endl;
        }
        cout<<"average"<<avgmark<<endl;
    }
};
float report:: getavg(float marks[5]){
      float to=0;
      for(int i=0;i<5;i++){
        to+=marks[i];
      }
      return to/5;
}

int main(){
    class report r1;
    r1.readinfo();
    r1.displayinfo();
    return 0;
}