#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, a, b;

    cin >> x >> y >> a >> b;

    if ((x >= 1 && x <= 10) && (y >= 1 && y <= 10) && (a >= 1 && a <= 10) && (b >= 1 && b <= 10))
    {
        if (x > a)
        {
            cout << "Alice";
        }
        else if (x == a)
        {
            if (y > b)
            {
                cout << "Alice";
            }
            else if (y == b)
            {
                cout << "Alice";
            }
            else
            {
                cout << "Bob";
            }
        }
        else
        {
            cout << "Bob";
        }
    }

    return 0;
}