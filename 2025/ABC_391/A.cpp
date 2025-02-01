// https://atcoder.jp/contests/abc391/tasks/abc391_a
// Lucky Direction


#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<string> arr = {"N", "NE", "E", "SE", "S", "SW", "W", "NW"};
    string result = "";
    for (int i = 0; i < 8; i++) {
        if (arr[i] == s) {
            int ind = (i + 4) % 8;
            result = arr[ind];
        }
    }
    cout << result << endl;
    return 0;
}