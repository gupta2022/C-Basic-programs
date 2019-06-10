#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a, b, i = 0;
	long int c, d = 0, r = 0, s = 0;
	cin >> a >> b >> c;
	char h[10];
	while (c > 0)
	{
		d = d + (c % 10) * pow(a, i);
		i++;
		c = c / 10;

	}
	if (b < 10)
	{
		while (d > 0)
		{
			r = r * 10 + d % b;
			d = d / b;

		}
		while (r > 0)
		{
			s = s * 10 + r % 10;
			r = r / 10;
		}
		cout << s;
	}
	else
	{
		int v = 0;
		while (d > 0)
		{
			if (d % b < 10)
			{
				h[v] = char(d % b + 48);
				v++;
			}
			else
			{
				h[v] = char(d % b - 10 + 65);
				v++;
			}
			d = d / b;

		}
		while (v > 0)
		{
			cout << h[v - 1];
			v--;
		}
	}

	return 0;
}
