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
    int n, count = 0, rank = 1;
    cin >> n;
    
    vi arr(n), result(n);
    ivec(arr);
    
    for (int i = 0; i < n; i++) {
        int maxi = *max_element(arr.begin(), arr.end());
        if (maxi == 0) break;
        int prev = count;
        for (int i = 0; i < n; i++) {
            if (arr[i] == maxi) {
                count++;
                arr[i] = 0;
                result[i] = rank;
            }
        }
        rank += count - prev;
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << "\n";
    }

    return 0;
}