#include<bits/stdc++.h>
using namespace std;

#define int long long int

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b){
        cout << "First\n";
    }
    else if(a < b){
        cout << "Second\n";
    }
    else{
        if(c % 2 == 1){
            cout << "First\n";
        }
        else{
            cout << "Second\n";
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while(T--)
    {
        solve();
    }
    return 0;
}
