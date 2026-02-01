#include<bits/stdc++.h>
using namespace std;

#define int long long int

void solve()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());
    int l = v[0], k = v[1];
    int m = n - 1, i = 0, ans = 0;
    while(m > 0){
        if(i % 2 == 0){
            ans += l;
        }
        else{
            ans += k;
        }
        m--;
        i++;
    }
    cout << ans << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //int T;
    //cin >> T;
    //while(T--)
    //{
        solve();
    //}
    return 0;
}
