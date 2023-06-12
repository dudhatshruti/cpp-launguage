#include<iostream>
using namespace std;
class shap{
    public:
    int add(int a)
    {
        return a*a*a;
    }
    int add(int l ,int b, int h)
    {
        return l*b*h;
    }
    double add(double r , double h)
    {
        return ((3.14*r*r*h))/3;
    }
    int add(int b , int h )
    {
        return ((b*h)/3);
    }
};

int main()
{
    shap a;
    cout<<"cube is:"<<a.add(3)<<endl;
    cout<<"cuboid is:"<<a.add(3,8,6)<<endl;
    cout<<"cone is:"<<a.add(8,6)<<endl;
    cout<<"pyramid is:"<<a.add(17,6)<<endl;

}

/*output :-
cube is:27
cuboid is:144
cone is:16
pyramid is:34
*/

