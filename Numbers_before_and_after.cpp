#include<iostream>
using namespace std;
void value(int);
int main()
{
	int n;
	cout<<"Enter an integer: ";
	cin>>n;
	value(n);
	return 0;
}
void value (int n)
{
	int p, s;
	p=n-1;
	s=n+1;
	cout<<"The precessor value of "<<n<<" is "<<p<<endl;
	cout<<"The successor value of "<<n<<" is "<<s;
}