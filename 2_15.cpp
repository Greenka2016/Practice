#include <iostream>
using namespace std;

int main()
{
	int n, z;
	bool flag = false;
	cout << "Vvedite chislo n: ";
	cin >> n;
	cout << "Vvedite chislo z: ";
	cin >> z;
	while (n > 0)
	{
		if (z == n % 10)
		{
			flag = true;
			break;
		}
		n = n / 10;
	}
	if (flag == true)
	{
		cout << "Chifra " << z << " vhodit v chislo";
	}
	else
	{
		cout << "Chifra " << z << " ne vhodit v chislo";
	}
	return 0;
}
