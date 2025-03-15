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
    unordered_set<int> st, st2;
    
    vi arr(n), pre(n), suf(n);
    for (size_t i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        st.insert(arr[i]);
        st2.insert(arr[n - i - 1]);
        pre[i] = st.size(); 
        suf[n - i - 1] = st2.size();
    }

    for (int i = 0; i < n - 1; i++) {
        int val = pre[i] + suf[i + 1];
        result = max(result, val);  
    }
    cout << result << "\n";
    return 0;
}