#include <iostream>
using namespace std;

int main()
{
	int n, a;
	bool flag = true;
	cout << "Kolichestvo elementov: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a < 0)
		{
			cout << "Otrizatetelinoe pervoe";
			flag = false;
			break;
		}
		else if (a > 0)
		{
			cout << "Polojitelnoe pervoe";
			flag = false;
			break;
		}
	}
	if (flag == true)
	{
		cout << "Vse elementy nuli";
	}
	return 0;
}
