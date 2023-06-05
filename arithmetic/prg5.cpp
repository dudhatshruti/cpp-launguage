#include<iostream>
using namespace std;
int main()
{
    int totalchair,totalcost,eachchair;
    cout<<"totalchair:";
    cin>>totalchair;

    cout<<"totalcost:";
    cin>>totalcost;

    cout<<"chair:";
    cin>>eachchair;

    eachchair = totalcost/totalchair;
    cout<<"eachchair is:"<<eachchair;
}

/*output :-
totalchair:200
totalcost:4000
chair:1
eachchair is:20
*/