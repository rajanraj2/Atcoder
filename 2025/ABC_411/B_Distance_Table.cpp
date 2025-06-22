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
    int n;
    cin >> n;
    
    vi arr(n - 1), pre(n - 1), suf(n - 1);
    ivec(arr);

    for (int i = 0; i < n - 1; i++) {
        if (i == 0) pre[i] = arr[i];
        else pre[i] = pre[i - 1] + arr[i];
    }

    for (int i = n - 2; i >= 0; i--) {
        if (i == n - 2) suf[i] = arr[i];
        else suf[i] = suf[i + 1] + arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int sub = (i > 0 ? pre[i - 1] : 0);
        for (int j = i; j < n - 1; j++) {
            int value = pre[j] - sub;
            cout << value << " ";
        }
        cout << "\n";
    }
}

int32_t main() {
    fio;
    solve();
    return 0;
}