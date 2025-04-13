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
    int n, result = 0;
    cin >> n;
    string s;
    bool loggedin = false;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (str == "private" && loggedin == false) {
            result++;
        }
        else if (str == "login") {
           loggedin = true; 
        }
        else if (str == "logout") {
            loggedin = false;
        }
        
    }
    cout << result << "\n";
    
    return 0;
}