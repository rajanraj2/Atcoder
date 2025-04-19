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

    int q;
    cin >> q;
    cin.ignore();

    string x;
    queue<pair<string, string>> q1;
    vs result;
    
    for (int i = 0; i < q; i++) {
        getline(cin, x);
        string a = "", b = "";
        bool flag = false;
        for (int i = 0; i < x.size(); i++) {
            if (x[i] == ' ') {
                flag = true;
                continue;
            }
            if (flag) b += x[i];
            else a += x[i];
        }

        if (a == "2") {
            if (!q1.empty()) {
                result.pb(q1.front().second);
                q1.pop();
            }
        }
        else q1.push({a, b});
    }

    for (auto it : result) {
        cout << it << endl;
    }

    return 0;
}
