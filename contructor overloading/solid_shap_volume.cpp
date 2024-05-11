#include<iostream>
using namespace std;
class shap{
    public:
    shap(int b)
    {
        cout<<"cube is:"<<b*b*b<<endl;
    }
    shap(int l , int b ,int h )
    {
        cout<<"cuboid is :"<<l*b*h<<endl;
    }
    shap(double r , double h )
    {
        cout<<"cone is :"<<((3.14*r*r*h)/3)<<endl;
    }
    shap(int b , int h )
    {
        cout<<"pyramid is :"<<((b*h)/3)<<endl;
    }
};

int main()
{
    shap a(8),b(5,8,5),c(9.7,6.7),d(6,3);
}

/*output :-
cube is:512
cuboid is :200
cone is :659.822
pyramid is :6
*/