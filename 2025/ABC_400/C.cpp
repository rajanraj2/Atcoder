#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back


int helper(int a) {
    int sq = sqrt(a);
    while (sq * sq > a) sq--;
    while ((sq + 1) * (sq + 1) <= a) sq++;
    return sq;
}
 
int32_t main() {
    fio;
    int N;
    cin >> N;
    int result = 0;

    int power2 = 2;
    while (power2 <= N) {
        int s = N / power2;
        int val = helper(s);
        result += (val + 1) / 2;
        power2 *= 2;
    }

    cout << result << "\n";
    return 0;
}