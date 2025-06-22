#include <bits/stdc++.h>
using namespace std;

#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

void solve() {
    int n, q, x, p;
    cin >> n >> q; 
    string server = "", s;
    
    vs pc(n, "");

    for (int i = 0; i < q; i++) {
        cin >> x;
        if (x == 1) {
            cin >> p;
            pc[p - 1] = server;
        }
        else if (x == 2) {
            cin >> p >> s;
            pc[p - 1] += s;
        }
        else if (x == 3) {
            cin >> p;
            server = pc[p - 1];
        }
    }   
    cout << server << "\n";
}


int32_t main() {
    fio;
    solve();
    return 0;
}


// struct Node { int parent; string s; };

// void solve() {
//     int n, q, x, p;
//     cin >> n >> q;
    
//     // persistent heads
//     int server_head = -1;
//     vector<int> pc_head(n, -1);
//     vector<Node> nodes;
//     nodes.reserve(q);
    
//     string s;
//     for (int i = 0; i < q; i++) {
//         cin >> x;
//         if (x == 1) {
//             cin >> p;
//             pc_head[p - 1] = server_head;
//         } else if (x == 2) {
//             cin >> p >> s;
//             nodes.pb({ pc_head[p - 1], s });
//             pc_head[p - 1] = (int)nodes.size() - 1;
//         } else {
//             cin >> p;
//             server_head = pc_head[p - 1];
//         }
//     }
    
//     // rebuild server string
//     vector<string> parts;
//     for (int cur = server_head; cur != -1; cur = nodes[cur].parent)
//         parts.pb(nodes[cur].s);
    
//     for (auto it = parts.rbegin(); it != parts.rend(); ++it)
//         cout << *it;
//     cout << '\n';
// }

// int32_t main() {
//     fio;
//     solve();
//     return 0;
// }
