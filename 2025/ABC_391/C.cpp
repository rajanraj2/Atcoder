// https://atcoder.jp/contests/abc391/tasks/abc391_c
// Pigeonhole Query


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> nest(n + 1, 1);
    int count = 0;
    map<int, int> mpp;
    for (int i = 0; i < q; i++) {
        int x, p, h;
        cin >> x;
        if (x == 1) {
            cin >> p >> h;
            if (mpp.find(p) != mpp.end()) {
                nest[mpp[p]]--;
                if (nest[mpp[p]] == 1) count--;
                mpp[p] = h;
                nest[h]++;
                if (nest[h] == 2) count++;
            }
            else {
                mpp[p] = h;
                nest[p]--;
                if (nest[p] == 1) count--;
                nest[h]++;
                if (nest[h] == 2) count++;
            }
        }
        else {
            cout << count << endl;
        }
    }
    return 0;
}