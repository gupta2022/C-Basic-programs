#include<iostream>
using namespace std;
int main()
{
	int n, s = 0, r = 0;
	cin >> n;
	while (n > 0)
	{
		s = s * 10 + n % 8;
		n = n / 8;

	}
	while (s > 0)
	{
		r = r * 10 + s % 10;
		s = s / 10;
	}
	cout << r;
	return 0;
}
