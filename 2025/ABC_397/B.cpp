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
    string s;
    cin >> s;
    int count = 0;
    int n = s.size();

    for (int i = 1; i < s.size(); i++) {
        if (s[i - 1] == 'i' && s[i] == 'o') {
            count += 2;
            i++;
        }
    }  
    int ans = n - count;
    cout << ans << "\n";
    return 0;
}