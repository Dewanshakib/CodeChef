#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int i = 1;
    while (true)
    {
        if ((20 * i) > t)
        {
            cout << i;
            break;
        }

        i++;
    }

    return 0;
}