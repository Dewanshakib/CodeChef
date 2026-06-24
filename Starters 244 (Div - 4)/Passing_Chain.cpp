#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--){
        int n,p;
        cin >> n >> p;

        int a = 1;
        for(int i = 1;i <= n;i++){
            a += p;
            if(a <= n){
                continue;
            } else {
                cout << a - p << endl;
                break;
            }
        }

    }

    
    return 0;
}