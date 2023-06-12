#include<iostream>
using namespace std;
class shaparea{
    public:
    int add(int p , double v)
    {
       return ((p*v)/2);
    }
    int add(int l)
    {
       return l*l;
    }
    int add(double l , double b )
    {
        return l*b;
    }
    int add(double r)
    {
        return (3.14*r*r);
    }
    int add(double r , int d)
    {
        return (3.14*r*d);
    }
    int add(int p , int v)
    {
        return (p*v);
    }
    
};

int main()
{
    shaparea a;
        cout<<"area of cone is:"<<a.add(8.,9)<<endl;
        cout<<"area of triangle is:"<<a.add(2,8)<<endl;
        cout<<"area of square is:"<<a.add(13)<<endl;
        cout<<"area of rectangle is:"<<a.add(10,9)<<endl;
        cout<<"area of circle is:"<<a.add(12)<<endl;
        cout<<"area of equilateral triangle is:"<<a.add(9,7)<<endl;
}

/*output :-
area of cone is:226
area of triangle is:16
area of square is:169
area of rectangle is:90
area of circle is:144
area of equilateral triangle is:63
*/