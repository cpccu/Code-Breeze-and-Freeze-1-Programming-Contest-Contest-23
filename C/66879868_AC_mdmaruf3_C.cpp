#include<bits/stdc++.h>
using namespace std;

#define int long long int

void solve()
{
    int n;
    cin >> n;
    int k = n - 1;
    int l = n + 1;

    if(k % 3 == 0 || l % 3 == 0){
        cout << "First\n";
    }
    else{
        cout << "Second\n";
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
