#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "Vvedite dva chisla\n";
    cin >> a >> b;
    if (b != 0)
    {
        cout << "a / b = " << a / b;
    }
    else
    {
        cout << "Na 0 delit nelzya!";
    }
}
