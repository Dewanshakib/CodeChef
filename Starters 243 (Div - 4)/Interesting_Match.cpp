#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if (x <= 10 && y <= 10)
    {

        if (abs(x - y) <= 2)
        {
            cout << "Interesting";
        }
        else
        {
            cout << "Boring";
        }
    }

    return 0;
}