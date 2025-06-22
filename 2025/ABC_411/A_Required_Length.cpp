#include <bits/stdc++.h>
using namespace std;

#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

void solve() {
    string p;
    int l;
    cin >> p >> l;
    
    int n = p.size();
    if (n >= l) cout << "Yes\n";
    else cout << "No\n";
}

int32_t main() {
    fio;
    solve();
    return 0;
}