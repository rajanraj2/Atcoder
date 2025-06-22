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
        int n, q, count = 0;
        cin >> n >> q;
        
        vi arr(q), cells(n, 0);
        ivec(arr);  

        for (int i = 0; i < q; i++) {
            int index = arr[i] - 1;
            int color = cells[index];
            if (index > 0 && index < n - 1) {
                if (cells[index - 1] == color && cells[index + 1] == color) {
                    count++;
                }
                else if (cells[index - 1] != color && cells[index - 1] == cells[index + 1]) {
                    count--;
                }
            }
            else if (index == 0) {
                if (index + 1 <= n - 1) {
                    if (cells[index + 1] == 0 && cells[index] == 0) { 
                        count++;
                    } 
                    else if (cells[index + 1] == 0 && cells[index] == 1) {
                        cells[index] = 1 - color;
                        count--;
                    }
                }
                else {
                    if (cells[index] == 0) {
                        count++;
                    } 
                    else if (cells[index] == 1) {
                        count--;
                    }
                }
            }
            else if (index == n - 1) {
                if (cells[index - 1] == 0 && cells[index] == 0) { 
                    count++;
                } 
                else if (cells[index - 1] == 0 && cells[index] == 1) {

                    count--;
                }
            }
            cells[index] = 1 - color;
            cout << count << "\n";
        }
    }

    int32_t main() {
        fio;
        solve();
        return 0;
    }