#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back


int32_t main() {
    fio;
    string t, u;
    cin >> t >> u;
    int sz = u.size();
    bool possible = false;

    for (int i = 0; i < t.size() - sz + 1; i++) {
        int prev = i;
        for (int j = 0; j < sz; j++) {
            if (t[i] != '?' && t[i] != u[j]) break;
            i++;
        }
        if (i - prev == sz) possible = true; 
        i = prev;
        if (possible) break;
    }

    if (possible) cout << "Yes\n";
    else cout << "No\n";
        
    return 0;
}