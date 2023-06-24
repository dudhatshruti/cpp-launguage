#include<iostream>
using namespace std;
class bank{
     float amt=0.0;
     public:
     void getdepo(float dp)
     {
        amt+=dp;
     }
     void with(float w){
        if (amt>=w)
        {
            amt=amt-w;
        }
        else
        {
            cout<<"insufficient balance:"<<endl;
        }
     }
     void show()
     {
        cout<<"balance is:"<<amt<<endl;
     }
};
int main()
{
    bank b;
    int c;
    float d,w;
    cout<<"1. Deposite"<<endl;
    cout<<"2. Withdrow"<<endl;
    cout<<"3. Check Balance"<<endl;
    cout<<"4.Exit"<<endl<<endl;
    while (1)
    {
       cout<<"choose your choice:"<<endl;
       cin>>c;

       switch(c)
       {
        case 1:
        cout<<"Enter Deposite :"<<endl;
        cin>>d;

        b.getdepo(d);
        break;

        case 2:
        cout<<"enter withdrow :"<<endl;
        cin>>w;

        b.with(w);
        break;

        case 3:
         b.show();
         break;

         case 4:
          exit(0);

        default:
        cout<<"wrong choice......"<<endl;  
       }
    }
}