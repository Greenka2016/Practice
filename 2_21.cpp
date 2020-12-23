#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Vvedite chislo: ";
    cin >> x;
    cout << "Vvedite chislo: ";
    cin >> y;
    bool flag = true;
    while (y != 0)
    {
        if (y <= x)
        {
            flag = false;
        }
        x = y;
        cout << "Vvedite chislo: ";
        cin >> y;
    }
    if (flag == false)
    {
        cout << "Chisla ne uporydocheny";
    }
    else
    {
       cout << "Chisla uporydocheny";
    }


    return 0;
}
