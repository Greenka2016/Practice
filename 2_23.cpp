#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, num, num_max = 0;
	cout << "Vvedite n: ";
	cin >> n;
	cout << "Kolichestvo elementov: ";
	cin >> num;
	float max = sin(n);
	for (int i = 1; i < num; i++)
	{
		float e = sin(n + i / n);
		if (e > max)
		{
			max = e;
			num_max = 0;
		}
		if (e == max)
		{
			num_max++;
		}
	}
	cout << "Max element: " << max;
	cout << "\nKolichestvo sovpadenyi elementov: " << num_max;
	return 0;
}
