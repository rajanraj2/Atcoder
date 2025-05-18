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
    int n, m, q;
    cin >> n >> m >> q;
    
    vs result;
    vector<set<int>> check(n + 1);

    for (int i = 0; i < q; i++) {
        int type, x, y;
        cin >> type;

        if (type == 1) {
            cin >> x >> y;
            check[x].insert(y);
        }
        else if (type == 2) {
            cin >> x;
            check[x].insert(-1);
        }
        else if (type == 3) {
            cin >> x >> y;
            if (check[x].find(-1) != check[x].end()) {
                result.pb("Yes");
            }
            else if (check[x].find(y) != check[x].end()) {
                result.pb("Yes");
            }
            else result.pb("No");
        }
    }

    for (auto it : result) {
        cout << it << "\n";
    }
        
    return 0;
}