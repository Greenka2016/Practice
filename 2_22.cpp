#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, num_max;
	float z;
	cout << "Vvedite n: ";
	cin >> n;
	cout << "Vvedite z: ";
	cin >> z;
	float max = sin(n);
	for (int i = 1; i < n; i++)
	{
		float e = sin(n + i / n);
		if (e > max)
		{
			max = e;
			num_max = i;
		}
	}
	cout << "Max element: " << max;
	cout << "\nNomer max elementa: " << num_max;
	return 0;
}
