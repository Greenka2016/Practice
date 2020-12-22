#include <iostream>
using namespace std;

int main()
{
	int n, x, max;
	cout << "Kolichestvo elementov: ";
	cin >> n;
	cin >> max;
	for (int i = 1; i < n; i++)
	{
		cin >> x;
		if (x > max)
		{
			max = x;
		}
	}
	cout << "Maksimalynij element: " << max;
	return 0;
}
