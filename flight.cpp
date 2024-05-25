#include<iostream>

using namespace std;

class flight
{
    private:
    int flno;
    char destination[20];
    float fldistance;
    float fuel;
    void calfuel(float fldistance);

    public:
    void feedinfo()
    {

        cout <<"Enter the Flight number:"<<endl;
        cin  >>flno;
        
        cout <<"Enter the Destination of Flight:"<<endl;
        cin  >>destination;

        cout <<"Enter the Distance of Flight:"<<endl;
        cin  >>fldistance;
        calfuel(fldistance);

    }
    void showinfo()
    {
        cout<<"\n\tFlight Number: "<<flno<<endl;
        cout<<"\n\tFlight Destination: "<<destination<<endl;
        cout<<"\n\tFlight distance: "<<fldistance<<endl;
        cout<<"\n\tFuel: "<<fuel<<endl;
    }
};
    void flight::calfuel(float fldistance)
    {
        if(fldistance<=1000)
        {
            fuel=500;
        }else if(fldistance>1000 && fldistance<=2000)
        {
            fuel=1100;
        }else if(fldistance>2000)
        {
            fuel=2200;
        }
    }

int main()
{
    class flight f1;
    f1.feedinfo();
    f1.showinfo();

    return 0;
}