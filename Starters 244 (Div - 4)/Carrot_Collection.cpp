#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        vector<int> ls;
        while (true)
        {
            l--;
            if (l < 1)
            {
                break;
            }
            ls.push_back(l);
        }

        vector<int> rs;
        while (true)
        {
            r++;
            if (r > n)
            {
                break;
            }
            rs.push_back(r);
        }

        int s_l = 0;
        for (int i = 0; i < ls.size(); i++)
        {
            int idx = ls[i] - 1;
            s_l += c[idx];
        }

        int r_l = 0;
        for (int i = 0; i < rs.size(); i++)
        {
            int idx = rs[i] - 1;
            r_l += c[idx];
        }

        cout << max(s_l,r_l) << endl;
    }

    return 0;
}