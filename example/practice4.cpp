#include<iostream>
using namespace std;
class flight{
    int flightnumber ,n;
    char destination[20];
    float distance,fuel;
    int calfuel(){
        if (distance<=1000)
        {
            // cout<<"500";
            fuel= 500;
        }
        else if (distance>=1000 && distance<=2000)
        {
            // cout<<"1100";
            fuel= 1100;
        }
        else if(distance>=2000)
        {
            // cout<<"2200";
            fuel=2200;
        }
        return fuel;
    }
    public:
    void feedinfo(){
        cout<<"enter flightnumber:";
        cin>>flightnumber;
        cout<<"enter destination:";
        cin>>destination;
        cout<<"enter distance:";
        cin>>distance;
        n = calfuel();
    }

    void showinfo(){
        cout<<"flight is:"<<flightnumber<<endl;
        cout<<"destination is:"<<destination<<endl;
        cout<<"distance is:"<<distance<<endl;
        cout<<"fuel is:"<< fuel<<endl;
    }
};

int main(){
    flight a;
    a.feedinfo();
    a.showinfo();
}

/*output :-
enter flightnumber:120
enter destination:klo
enter distance:1001

flight is:120
destination is:klo
distance is:1001
fuel is:1100
*/