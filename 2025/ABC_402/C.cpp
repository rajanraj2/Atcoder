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

    int n, m, x, k;
    cin >> n >> m;
    vector<pair<int, unordered_set<int>>> dishes(m);
    vector<vector<int>> arr(n + 1);
    vi rem(m);
    int count = 0;

    for (int idx = 0; idx < m; idx++) {
        cin >> k;
        dishes[idx] = {k, {}};
        rem[idx] = k;
        for (int j = 0; j < k; j++) {
            cin >> x;
            dishes[idx].second.insert(x);
            arr[x].pb(idx); 
        }
    }

    vi B(n);
    ivec(B);

    vector<bool> liked(n + 1, false);
    int edible = 0;

    for (int day = 0; day < n; day++) {
        x = B[day];
        liked[x] = true;

        for (int dish : arr[x]) {
            if (dishes[dish].second.count(x)) {
                rem[dish]--;
                dishes[dish].second.erase(x);
                if (rem[dish] == 0) {
                    edible++;
                }
            }
        }
        cout << edible << endl;
    }
    
    return 0;
}