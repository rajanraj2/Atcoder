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
    int n, k;
    cin >> n >> k;
    int mod = 1e9;

    vi arr(n + 1);
    arr[0] = 1;
    int sum = 1;
    
    for (int i = 1; i <= n; i++) {
        if (i < k) {
            arr[i] = 1;
            sum = (sum + arr[i]) % mod;
        }
        else {
            arr[i] = sum % mod;
            sum = (sum - arr[i - k] + arr[i] + mod) % mod;
        }
    }
    cout << arr[n] << "\n";
    
    return 0;
}