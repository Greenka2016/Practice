#include <iostream>
using namespace std;

int main()
{
	int n, x = 0;
	cout << "Vvedite n: ";
	cin >> n;
	while (n > 0)
	{
	    x = x + (n % 10);
	    x = x * 10;
	    n = n / 10;
	}
	x = x / 10;
	cout << x;
	return 0;
}
