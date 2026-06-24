#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int x;
        cin >> x;

        int e = 0, o = 0;
        for (int i = 0; i < x; i++)
        {
            int n;
            cin >> n;

            if (n % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }

        if (e == 0 && (x % 2 == 0))
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}