#include<iostream>

using namespace std;

class book{
    
    private:
    int bookno;
    char booktitle[20];
    float price;
    int copy;
    void totalcost(int copy);

    public:
    void input(){
        cout<<"\nEnter the Book no:";
        cin>>bookno;
        cout<<"\nEnter the Booktitle:";
        cin>>booktitle;
        cout<<"\nEnter the price of copy:";
        cin>>price;
    //    cout<<"Enter the numbers of copy you Want to purchase:";
      //  cin>>copy;

       
    }
    void purchase(){
         cout<<"Enter the numbers of copy you Want to purchase:";
          cin>>copy;
          totalcost(copy);

        cout<<"total cost is:"<<totalcost<<endl;
    }

};
    void book::totalcost(int copy1){
            copy=price*copy1;
            cout<<"Total price:-"<<copy;
        }

int main(){
    class book s1;
    s1.input();
    s1.purchase();

    return 0;
}