#include <iostream>
using namespace std;

int main()
{
    int a, b, c, maxch;
    cout << "Vvedite tri chisla!\n";
    cin >> a >> b >> c;
    if (a >= b)
    {
        maxch = a;
    }
    else
        maxch = b;
    if (c > maxch)
    {
        maxch = c;
    }
    cout << "Maximalnoe chislo is treh: " << maxch;
    return 0;

}
