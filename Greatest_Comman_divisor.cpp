#include<iostream>
using namespace std;
int main() {
	long int a, b, m = 1, n, gcd = 1;
	cin >> a >> b;
  //n is the smallest of two no
	if (a < b)
		n = a;
	else
		n = b;
    //Calculates the GCD by changing m from 1 to n
	while (m <= n)
	{
		if (a % m == 0 && b % m == 0)
			gcd = m;
		m++;
	}
	cout << gcd;
	return 0;
}
