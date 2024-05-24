#include<iostream>
using namespace std;

class batsman{
    private:
    int bcode;
    char bname[20];
    int innings,notout,runs;
    float batavg;
    void calcavg(int innings,int notout,int runs);

    public:
    void readdata(){
        cout<<"enter the batsman code:";
        cin>>bcode;
        cout<<"enter the batsman name:";
        cin>>bname;
        cout<<"enter the batsman innings:";
        cin>>innings;
        cout<<"enter the batsman notout:";
        cin>>notout;
        cout<<"enter the batsman run:";
        cin>>runs;
        calcavg(innings,notout,runs);
    }
    void calcavg(){
        batavg=(runs/innings-notout);
    }
    void displaydata(){
        cout<<"\tbatsman code:"<<bcode<<endl;
        cout<<"\tbatsman name:"<<bname<<endl;
        cout<<"\tbatsman innings:"<<innings<<endl;
        cout<<"\tbatsman notout:"<<notout<<endl;
        cout<<"\tbatsman runs:"<<runs<<endl;
        cout<<"\tbatsman average:"<<batavg<<endl;
    }
};
    void batsman::calcavg(int innings,int notout,int runs)
    {
        batavg=runs/(innings-notout);
    }

int main(){
    class batsman b1;
    b1.readdata();
    b1.displaydata();
    return 0;
}