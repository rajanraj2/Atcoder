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
    
    int n;
    cin >> n;
    
    vi arr(n);
    unordered_map<int, vector<int>> mpp;
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
        mpp[arr[i]].push_back(i);
    }
    long long result = LLONG_MAX;

    for (auto it : mpp) {
        for (int i = 1; i < it.second.size(); i++) {
            result = min(result, it.second[i] - it.second[i - 1] + 1);
        }
    }
    if (result == LLONG_MAX) result = -1;
    
    cout << result << "\n";   
    return 0;
}