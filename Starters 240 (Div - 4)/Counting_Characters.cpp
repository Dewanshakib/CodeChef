#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    string s;

    cin >> t;

    while (t--)
    {
        cin >> n;
        cin >> s;
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
            {
                a++;
            }
            else
            {
                b++;
            }
        }

        cout << a << " " << b << endl;
    }

    return 0;
}