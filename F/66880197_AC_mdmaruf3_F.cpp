#include<bits/stdc++.h>
using namespace std;

#define int long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    if(a == b){
        cout << "Bob\n";
    }
    else{
        reverse(b.begin(), b.end());
        if(a == b){
            cout << "Bob\n";
        }
        else{
            cout << "Alice\n";
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
