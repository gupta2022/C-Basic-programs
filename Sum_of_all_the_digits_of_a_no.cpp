#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int s = 0;
	while (a > 0)
	{
		s =s*10+ a % 10;
		a = a / 10;
	}
	cout << " sum is " << s;
	return 0;

}
