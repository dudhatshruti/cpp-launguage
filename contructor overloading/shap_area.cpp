#include<iostream>
using namespace std;
class area
{
    public:
    area(int P, double V)
    {
        cout<<"area of triangle = "<<((P*V)/2)<<endl;
    }
    area(int l)
    {
        cout<<"area of square = "<<(l*l)<<endl;
    }
    area(double L, double b)
    {
        cout<<"area of rectangle = "<<(L*b)<<endl;
    }
    area(double r)
    {
        cout<<"area of circle = "<<(3.14*r*r)<<endl;
    }
    area(double R, int d)
    {
        cout<<"area of cone = "<<3.14*R*d<<endl;
    }
    area(int p, int v)
    {
        cout<<"area of equilateral triangle = "<<p*v<<endl;
    }
};
int main()
{
    area a(5, 5.7),b(10),c(4.3,8.1),d(5.23),f(3.6,7),g(4,8);
}


