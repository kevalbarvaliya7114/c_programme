#include<iostream>

using namespace std;

int main(){
    int rate;
    int qty;
    int amt;
    float dis5;
    int billamt;
    float gst;
    int netbill;

    cout << "Enter the rate of item:";
    cin >> rate;
    cout << "Enter the qty of item:";
    cin >>qty;

    amt=rate*qty;
    dis5=amt*5/100;
    billamt=amt-dis5;
    gst=billamt*18/100;
    netbill = billamt+gst;

    cout << "=======================================================" << endl;

    cout << "rate\tqty\tamt\tdis5\tbillamt\tgst\tnetbill"<< endl;

    cout << rate << "\t" << qty << "\t" << amt << "\t" << dis5 << "\t" << billamt << "\t" << gst << "\t" << netbill << "\t" << endl; 
    cout << "=======================================================" << endl;
}