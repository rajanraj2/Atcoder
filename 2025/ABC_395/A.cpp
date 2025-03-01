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
        string result = "YES";
        vi arr(n);
        for (int i = 0; i < arr.size(); i++) {
            cin >> arr[i];
            if (i != 0 && arr[i] <= arr[i - 1]) result = "NO";
        }
        cout << result << "\n";
    
    return 0;
}