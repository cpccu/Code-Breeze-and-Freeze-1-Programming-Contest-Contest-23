#include<bits/stdc++.h>
using namespace std;

#define int long long int

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for(int i = x - 1; i >= 0; i--){
        v.push_back(i);
    }
    for(int i = n - x + 1; i >= x; i--){
        v.push_back(i);
    }
    for(auto it : v){
        cout << it << ' ';
    }
    cout << '\n';
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
