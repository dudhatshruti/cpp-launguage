#include<iostream>
#include<string.h>
using namespace std;
class menu{
    string name;
    int mobno,l,amt,item,qty,prono,price;
    float total_item=0.0,t,dis,gst,np;
    public:
    menu()
    {
        cout<<"enter your name :"<<name<<endl;
        cin>>name;
      //   cout<<"enter 10 digit mobile no.";
      //   cin>>mobno;
        if (mobno !=10)
        {
           cout<<"enter mobile no.";
           cin>>mobno;
        }
        
        cout<<"******************* silver green restaurant ******************** "<<endl;
        cout<<" *************************  MENU  ************************"<<endl;
        cout<<"   SOUPS          "<<endl;
        cout<<"======================================================="<<endl;
        cout<<"1.veg. manchaow                         70/-"<<endl;              
        cout<<"2.Cream of tomato soup                  120/-"<<endl;
        cout<<"3.Cream of Veg. soup                    115/-"<<endl;
        cout<<"4.Cream of mushroom soup                115/-"<<endl;
        cout<<"5.Cheese Corn Tomato soup               115/-"<<endl<<endl;

        cout<<"Gujarati Dish"<<endl;
        cout<<"=========================================================="<<endl;
        cout<<"6.sev tameta                           40/-"<<endl;
        cout<<"7.Dahi fry                             50/-"<<endl;
        cout<<"8.Mung Dal                             45/-"<<endl;
        cout<<"9.sev Kanda                            130/-"<<endl<<endl;
        
        cout<<" PANEER STARTER"  <<endl;
        cout<<"=========================================================="<<endl;
        cout<<"10.paneer lifafa                        120/-"<<endl;   
        cout<<"11.paneer chilly                        150/-"<<endl;   
        cout<<"12.paneer shangai                       160/-"<<endl;   
        cout<<"13.paneer manchurian                    160/-"<<endl;   
        cout<<"14.thai paneer                          175/-"<<endl;  
        cout<<"15.sizzling paneer                      180/-"<<endl<<endl;  

    }
    
    void order(){
        cout<<"enter item no:"<<item<<endl;
        cin>>item;
        cout<<"enter no. of quentity"<<qty<<endl;
        cin>>qty;
        total_item +=qty;

        if (item==1)
        {
           prono = item;
           name="veg. manchaow";
           price=70;
        }
        if (item==2)
        {
           prono=item;
           name="Cream of tomato soup";  
           price=120;
        }
        if (item==3)
        {
           prono=item;
           name="Cream of Veg. soup ";  
           price=115;
        }
        if (item==4)
        {
           prono=item;
           name="Cream of mushroom soup  ";  
           price=115;
        }
        if (item==5)
        {
           prono=item;
           name="Cheese Corn Tomato soup  ";  
           price=115;
        }
        if (item==6)
        {
           prono=item;
           name="sev tameta ";  
           price=40;
        }
        if (item==7)
        {
           prono=item;
           name="dahi fry ";  
           price=50;
        }
        if (item==8)
        {
           prono=item;
           name="mung dal";  
           price=45;
        }
         if (item==9)
        {
           prono=item;
           name="sev kanda";  
           price=130;
        }
        if (item==10)
        {
           prono=item;
           name="paneer lifafa";  
           price=120;
        }
        if (item==11)
        {
           prono=item;
           name="paneer chilly";  
           price=150;
        }
        if (item==12)
        {
           prono=item;
           name="paneer shangai";  
           price=160;
        }
        if (item==13)
        {
           prono=item;
           name="paneer manchurian";  
           price=160;
        }
        if (item==14)
        {
           prono=item;
           name="thai paneer";  
           price=174;
        }
        if (item==15)
        {
           prono=item;
           name="sizzling paneer";  
           price=180;
        }   
    }

    void bill(){
         t=price*qty;
         if (t>=300)
         {
            dis=t*25/100;
         }
         else{
            dis=0.0;
         }
         gst=t*10/100;
         np=t+gst-dis;
    }
    

};
 int main(){
    menu a;
    int n;
    char name;
    int mobno;

    cout<<"enter your name :"<<name<<endl;
    cin>>name;
    cout<<"enter 10 digit mobile no."<<mobno;
    cin>>mobno;
 }





