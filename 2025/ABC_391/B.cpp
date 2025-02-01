// https://atcoder.jp/contests/abc391/tasks/abc391_b
// Seek Grid


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> s(n, vector<char>(n)), t(m, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> t[i][j];
        }
    }

    bool check = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i][j] == t[0][0]) {
                bool flag = true;
                for (int k = 0; k < m; k++) {
                    for (int l = 0; l < m; l++) {
                        if (i + k >= n || j + l >= n || s[i + k][j + l] != t[k][l]) {
                            flag = false;
                        }
                    }
                }
                if (flag) {
                    cout << i + 1 << " " << j + 1 << endl;
                    check = true;
                    break;
                }
            }
        }
        if (check) break;
    }
    return 0;
}