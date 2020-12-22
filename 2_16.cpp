#include <iostream>
using namespace std;

int main()
{
	int n, f;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
	    f = (i % 2 == 0);
		sum = sum + (f * 2 - 1) * i;
	}
	cout << sum;
    return 0;
}
