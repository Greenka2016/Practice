#include <iostream>
#include<cmath>

using namespace std;

int n;
float x, s, fact;

int main()
{
	cout << "Vvedite n: ";
	cin >> n;
	cout << "Vvedite x: ";
	cin >> x;
	s = 1;
	fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact *= i;
		s += (pow(x, i) / fact);
	}
	cout << "Znachenie mnogochlena: " << s;
}
