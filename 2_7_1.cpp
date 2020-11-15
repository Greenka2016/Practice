#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Vvedite n\n";
    cin >> n;
    float s = sqrt(n);
    if ((s * s) != n || n <= 1)
    {
        cout << "Nevernie vvodimie dannie\n";
    }
    else
    {
        for (int i = 1; i <= s; i++)
        {
            for (int j = 1; j <= s; j++)
            {
                cout << "* ";
            }
            cout << "\n";
        }
    }
    return 0;
}
