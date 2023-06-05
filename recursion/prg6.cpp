#include<iostream>
using namespace std;
#define n 5
   int dis(int a[ ])
{
  for(int i=0;i<n;i++)
{
  if(i==0)
cout<< "\n"<<a[i];
else
cout<<"\n"<<a[i]<<a[i]+a[i-1];
}
}
int main()
{
int arr[n],i;
for(i=0;i<n;i++)
{
   cout<<"entar a[" <<i<< "]:";
   cin>>arr[i];
}
dis(arr);
}

/*output:-
entar a[0]:10
entar a[1]:20
entar a[2]:30
entar a[3]:40
entar a[4]:50

10
2030
3050
4070
5090
*/