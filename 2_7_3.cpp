#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Vvedite n\n";
    cin >> n;
    if (n <= 2)
    {
        cout << "Nevernie vvodimie dannie\n";
    }
    else
    {
        for (int i = 1; i <= n ; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == 1 || i == n || j == 1 || j == n)
                {
                cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
