#include <iostream>

using namespace std;

void fib(int n)
{
	int first=1, second=1, next;
	cout<<"Fibonacci series are: \n";
	for(int i = 0; i < n; i++)
	{
		cout<<first<<" ";
		next = first + second;
		first = second;
		second = next;
	}
}

void main()
{
	int no;

	cout<<"Enter nubmer of terms for Series: ";
	cin>>no;
	fib(no);

	cin.get();
	cin.get();
}
