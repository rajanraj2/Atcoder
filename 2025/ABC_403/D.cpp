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
    int n, d, result = 0;
    cin >> n >> d;
    map<int, int> mpp;
    
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    if (d == 0) {
        cout << n - mpp.size() << "\n";
        return 0;
    }

    vi values;
    values.reserve(mpp.size());
    for (auto &it : mpp) values.pb(it.first);
    sort(values.begin(), values.end());

    map<int,bool> used;
    int rem = 0;

    for (int val : values) {
        if (used[val]) continue;

        int y = val;
        while (mpp.count(y - d)) y -= d;

        vi sum;
        for (int i = y; mpp.count(i); i += d) {
            sum.pb(mpp[i]);
            used[i] = true;
        }

        int v1 = 0, v2 = sum[0];
        for (int i = 1; i < sum.size(); i++) {
            int new_v1 = max(v1, v2);
            int new_v2 = v1 + sum[i];
            v1 = new_v1;
            v2 = new_v2;
        }
        rem += max(v1, v2);
    }

    result = n - rem;
    cout << result << "\n";
        
    return 0;
}