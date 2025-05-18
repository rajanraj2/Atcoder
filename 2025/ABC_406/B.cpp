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

    vi arr(n);

    int digits = 1;
    for (int i = 0; i < k; i++) digits *= 10;

    int value = 1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        __int128 mul = (__int128)value * arr[i];
        if (mul >= digits) value = 1;
        else value = (int)mul;
    }

    cout << value << "\n";
    
    return 0;
}