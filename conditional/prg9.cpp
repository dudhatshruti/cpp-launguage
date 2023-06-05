#include<iostream>
using namespace std;
int main()
{
    int prono,price,qty,rate,discount,ratead,gst,billamt;
    cout<<"enter price:";
    cin>>price;

    cout<<"enter qty:";
    cin>>qty;

    rate= price*qty;
    // cout<<"rate:"<<rate;

    rate= price*qty;
    cout<<"rate:"<<rate;

    rate= price*qty;
    cout<<"rate:"<<rate;

    discount=rate*0.10;
    cout<<"discount:"<<discount;

    ratead=rate - discount;
    cout<<"ratead:"<<ratead;

    gst = ratead*0.18;
    cout<<"gst:"<<gst;

    billamt = ratead + gst;
    cout<<"billamt:"<<billamt;

    
    // cout<<"\nprice \tqty \trate,\tdiscount,\tratead,\tgst,\tbillamt";
    // cout<<"\nprice \tqty \trate \t(%d) \t\t(%d) \t(%d) \t(%d) ";


}
