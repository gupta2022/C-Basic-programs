#include<iostream>
using namespace std;
void main()
{
	int n,a,x=0;
	cin >> n;
	n = 2 * n + 1;

//x is the unique no using ^(xor) it will nullify all the pair of nos
	for (int i = 0; i <n; i++)
	{
		cin>>a;
		x=x^a;
	}
	
	cout << x;

}
