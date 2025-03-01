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
    int n;
    cin >> n;
    vector<vector<char>> matrix(n + 1, vector<char> (n + 1, '.'));

    for (int i = 1; i <= n; i++) {
        int j = n + 1 - i;
        if (j < i) continue;
        char sym = '.';
        if (i % 2) sym = '#';

        for (int start = i; start <= j; start++) matrix[i][start] = sym;
        for (int start = i; start <= j; start++) matrix[start][j] = sym;
        for (int start = i; start <= j; start++) matrix[j][start] = sym;
        for (int start = i; start <= j; start++) matrix[start][i] = sym;
    }


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << matrix[i][j];
        }
        cout << "\n";
    }
  
    return 0;
}