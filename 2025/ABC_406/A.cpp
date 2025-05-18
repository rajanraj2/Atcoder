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

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (c > a) cout << "No\n";
    else if (c < a) cout << "Yes\n";
    else {
        if (d <= b) cout << "Yes\n";
        else cout << "No\n";
    }
    
    return 0;
}