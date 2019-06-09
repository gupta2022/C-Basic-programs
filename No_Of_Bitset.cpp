#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < 2 * n + 1; j++)
		{
			if (j <= i)
			{
				cout << n - j << " ";
			}
			else
				if (j < (2 * n - i))
				{
					cout << "  ";
				}
				else
				{
					cout << j - n << " ";

				}
		}
		cout << endl;
	}
	for (int l = 0; l < n; l++)
	{
		for (int k = 0; k < 2 * n + 1; k++)
		{
			if (k <= n -1- l)
				cout << n-k << " ";
			else
				if (k >= n  + l+1)
					cout << k - n<< " ";
				else
					cout << "  ";

			/* code */
		}
		cout << "\n";

	}
return 0;
}
