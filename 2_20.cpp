#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, a;
	float z;
	bool flag = false;
	cout << "Vvedite n: ";
	cin >> n;
	cout << "Vvedite z: ";
	cin >> z;
	for (int i = 0; i < n; i++)
	{
		if (sin(n + i / n) == z)
		{
			flag = true;
			break;
		}
	}
	if (flag == true)
	{
		cout << "Est element " << z;
	}
	else
	{
		cout << "Net elementa " << z;
	}
	return 0;
}
