#include<iostream>
using namespace std;
struct bill
{
    int productno,price,qty,rate,dis,ratead,gst,billamt;
    char productname[50];
};

int main()
{
    struct bill a[10];
    int i;
    cout<<"enter data:------------------\n";
    for (i=0; i<5; i++)
    {
        cout<<"enter productno:";
        cin>>a[i].productno;
        cout<<"enter productname:";
        cin>>a[i].productname;
        cout<<"enter price:";
        cin>>a[i].price;
        cout<<"enter qty:";
        cin>>a[i].qty;
    }
    cout<<"pno \tpname \tprice \tqty \trate \tdis \trated \tgst \tbillamt";
    for (i=0; i<5; i++)
    {
        a[i].rate = a[i].price * a[i].qty;
        a[i].dis =  a[i].rate*0.10;
        a[i].ratead =a[i].rate - a[i].dis;
        a[i].gst =a[i].ratead*0.18;
        a[i].billamt = a[i].ratead + a[i].gst;
        cout<<""<<a[i].productno <<a[i].productname <<a[i].price <<a[i].qty <<a[i].rate <<a[i].dis <<a[i].ratead <<a[i].gst <<a[i].billamt;
    } 
}
/*output :-
pno     pname   price   qty     rate    dis     rated   gst     billamt
1       rty     100     5       500     50      450     80      530
2       wer     200     5       1000    100     900     161     1061
*/