#include <iostream>
using namespace std;

int main()
{
    int sum, a, n;
    sum = 0;
    cout << "Vvedite n\n";
    cin >> n;
    if (n <= 0)
    {
        cout << "Nevernie vvodimie dannie";
    }
    else
    {
    for (int i = 1; i <= n; i++)
    {
    a = 1;
    for (int j = i; j <= i * 2; j++)
    {
    a *= j;
    }
    sum += a;
    }
    cout << sum;
    }
    return 0;
}
