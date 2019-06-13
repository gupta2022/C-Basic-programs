#include<iostream>
using namespace std;
void main()
{
	//initialization of the array 0=1 1=2 and all the rest as 0
	//if a[n]={0} at intializatio all elements are 0 by default
	int a[10] = { 1,2 };
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
}
