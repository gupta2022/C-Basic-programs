#include<iostream>
using namespace std;
void main()
{
	int a[10], max;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	max = a[0];
	for (int i = 0; i < 10; i++)
	{
		cout << a[9 - i]<<"\n";
		if (max < a[i])
			max = a[i];
	}
	cout << " max " << max;
}
