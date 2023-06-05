#include<iostream>
using namespace std;
#define n 5
int display(int arr[ ] ){
	int i,min,max;
	min=arr[0];
    max=arr[0];
	for (i=1; i<n; i++)
	{
		if (arr[i] < min)
		min=arr[i];
		if (arr[i]> max)
		max=arr[i];	
	}
	cout<<"minimum number is :"<<min;
	cout<<"\nmaximum number is:"<<max;
}
int main()
{
	int arr[5], i;
    cout<<"enter number:";
	for (i=0;i<n; i++)
	{
		cin>>arr[i];
	}
	
	display(arr);
}

/*output :-
enter number:52
36
21
32
41
minimum number is :21
 maximum number is:52
*/