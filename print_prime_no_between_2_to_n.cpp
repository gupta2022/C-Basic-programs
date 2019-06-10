#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
	int n,i=1,c=0,d=2;

	cin >> n;
	if (n == 1)
		return 0;
	else
	{
		while (i <= n)
		{
			i++;
			c = 0;
			d = 2;
			while (d < i)
			{
				
				if (i % d == 0)
					c++;
				d++;
			}
			if (c == 0)
				cout << i << " ";
			
		}
	}


	system("pause");

	return 0;
}
