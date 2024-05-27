#include<iostream>

using namespace std;

class report{
    private:
    int adno;
    char name[20];
    float marks[5];
    int avg;
    void getavg(int avg);

    public:
    void readinfo(){
        cout<<"Enter the admission no.:";
        cin>>adno;
        cout<<"Enter the name:";
        cin>>name;

        for(int i=0;i<5;i++){
          cout<<"Enter the marks:";
            cin>>marks[i];
        }
    }
    void displayinfo(){
        cout<<"admission no.:"<<adno<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"total marks:"<<getavg(avg)<<endl;
    }
};
int report:: getavg(int avg){
    for(int k=0;k<5;k++){
        avg+=marks[k];
    }
      avg=avg/5;
      return avg;
}

int main(){
    return 0;
}