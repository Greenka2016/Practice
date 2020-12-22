#include <iostream>
using namespace std;
#include <cmath>

int main()
{
	float a, b, c;
	cout << "a*x^2 + b*x + c = 0 \n";
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	float d = pow(b, 2) - 4 * a * c;
	if (d < 0)
	{
		cout << "Net reshenia";
	}
	else if (d == 0)
	{
		cout << "X = " << -b / (2 * c);
 	}
	else
	{
		cout << "X1 = " << (-b - sqrt(d)) / (2 * a) << ", X2 = " << (-b + sqrt(d)) / (2 * a);
	}
	return 0;
}
