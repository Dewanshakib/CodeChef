#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while (tt--){
        int x,y;
        cin >> x >> y;
        
        int t = 0;
        while (true){
            if(x == y){
                cout << t << endl;
                break;
            }
            t+=ceil((float)x / 10);
            x--;
        }




    }


    return 0;
}