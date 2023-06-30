#include<iostream>
using namespace std;
class bank{
    public:
    void system(){
        cout<<"******* bank system********"<<endl;
    }
};

class saving : public bank{
    public:
    int savingchoice;
    float saving_bal=2000;
    float saving_depo,saving_with;

    void saving1(){
        cout<<"\t\t\t ------ saving account-------\t\t\t\t"<<endl;
        while (1)
        {
            cout<<"1.  Deposite Money"<<endl;
            cout<<"2.  Withdrow Money "<<endl;
            cout<<"3.  Check Balance"<<endl;
            cout<<"4.   Exit"<<endl;
            cout<<"\nEnter Your Choice ::";
            cin>>savingchoice;

            switch (savingchoice)
            {
                case 1:
                cout<<"enter money for deposite:"<<endl;
                cin>>saving_depo;

                saving_bal+=saving_depo;
                break;

                case 2:
                cout<<"enter money for withdrow:"<<endl;
                cin>>saving_with;

                if (saving_with>saving_bal)
                {
                     cout<<"Insufficient Balance in your account...."<<endl;
                }
                else{
                    saving_bal-=saving_with;
                }
                break;
                case 3:
                     cout<<"Balance is :" <<saving_bal<<endl;
                     break;
                case 4:
                     cout<<"Thanks You for visit"<<endl;
                     exit(0);

                default:
                  cout<<"Your choice is wrong...............";
                  break;        
            }
        } 
    }
};
class current : public bank {
    public:
    int current_choice;
    float current_bal=10000;
    float current_depo,current_with;

    void current1(){
        cout<<"\t\t\t------current account--------\t\t\t\t"<<endl;

        while(1){
            cout<<"1.  Deposite Money"<<endl;
            cout<<"2.  Withdrow Money "<<endl;
            cout<<"3.  Check Balance"<<endl;
            cout<<"4.  Exit"<<endl;
            cout<<"\t\t\tEnter Your Choice ::";
            cin>>current_choice;

            switch(current_choice){
                case 1:
                 cout<<"Enter Money for Deposite :"<<endl;
                 cin>>current_depo;

                 current_bal+=current_depo;
                 break;

                  case 2:
                    cout<<"Enter Money for Withdrow :"<<endl;
                    cin>>current_with;
                     if(current_with>current_bal)
                    {
                       cout<<"Insufficient Balance in your account.............."<<endl;
                    }
                    else
                    {
                    current_bal-=current_with;
                    }
                     break;
                       case 3:
                     cout<<"Balance is :" <<current_bal<<endl;
                     break;
                     case 4:
                     cout<<"Thanks You for visit"<<endl;
                     exit(0); 
                     default:
                     cout<<"Your choice is wrong..............."<<endl;
                     break;
            }
        }
    } 
};

int main(){
    saving a;
    current b;
    int c;

    cout<<"1.  Current Accont"<<endl;  
    cout<<"2.  Saving Account"<<endl<<endl;  
    cout<<"\nEnter your choice"<<endl;
    cin>>c;

      if(c==1)
    {
        a.system();
        b.current1();
    }  
    else if(c==2)
    {
         a.system();
         a.saving1();
    }
    else
    {
       cout<<"Your choice is wrong..........."<<endl;
    }
}