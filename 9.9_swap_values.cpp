#include<iostream>
using namespace std;
void swap(int&x, int&y);
int main()
{
	int a, b;
	cout<<"Enter a integer: ";
	cin>>a;
	cout<<"Enter a integer: ";
	cin>>b;
	cout<<"Values before swapping are:\n";
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	swap(a, b);
	cout<<"Values after swapping are:\n";
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return 0;
}

void swap(int&x, int&y)
{
	int t;
	t=x;
	x=y;
	y=t;
}