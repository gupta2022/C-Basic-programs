#include<iostream>
#include<math.h>

using namespace std;

int main()

{
	long int n, s = 0, c, i = 0;

	cin >> n;
	c = n;
	while (c > 0)
	{
		s += (c % 10) * pow(2, i);
		i++;
		c = c / 10;
	}

	cout << s;



	return 0;
}
