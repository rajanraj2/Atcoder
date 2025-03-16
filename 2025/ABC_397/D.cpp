#include <iostream>
using namespace std;

// Function to compute integer square root of a number a using binary search.
// Here a is assumed to be less than 2^64.
unsigned long long isqrt(unsigned long long a) {
    unsigned long long lo = 0, hi = 10000000000ULL; // hi is sufficiently high (1e10^2 = 1e20)
    while(lo <= hi) {
        unsigned long long mid = (lo + hi) >> 1;
        unsigned __int128 sq = (unsigned __int128) mid * mid;
        if(sq == a) return mid;
        if(sq < a)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return hi;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N;
    cin >> N;
    
    // d = x - y must be at least 1.
    // Also, note that d^3 is part of the sum and roughly d^3 <= N, so d is at most cube_root(N).
    // We can loop d from 1 to about 1e6 (cube root of 1e18 is 1e6).
    for (long long d = 1; d <= 1000000; d++){
        if(N % d != 0) continue; // d must divide N
        long long M = N / d;
        
        // Compute the discriminant: Δ = 12*M - 3*d^2.
        // Use 128-bit integer to avoid overflow.
        __int128 delta = 12;
        delta *= M;         // 12*M
        delta -= 3LL * d * d; // 12*M - 3*d^2
        
        if(delta < 0) continue; // no real roots
        
        // We need to check if delta is a perfect square.
        unsigned long long delta_ll = (unsigned long long) delta; // safe since delta < 2^64 for our N range.
        unsigned long long R = isqrt(delta_ll);
        if((unsigned __int128) R * R != delta) continue; // not a perfect square
        
        // Now check if y is integer:
        // y = (-3*d + R) / 6 must be positive and integer.
        if((R < 3*d)) continue; // then y would be negative
        if((R - 3*d) % 6 != 0) continue;
        long long y = (R - 3*d) / 6;
        if(y <= 0) continue;
        long long x = y + d;
        // We have a valid solution.
        cout << x << " " << y << "\n";
        return 0;
    }
    
    cout << -1 << "\n";
    return 0;
}



// TLE

// #include <iostream>
// #include <cmath>
// using namespace std;
 
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     long long N;
//     cin >> N;
    
//     // We loop over possible y values.
//     // Note: When x = y + 1, we have N = 3*y*y + 3*y + 1.
//     // For N up to 1e18, y is roughly <= 1e6.
//     for (long long y = 1; y <= 1000000; y++){
//         long long cubeY = y * y * y;
//         long long candidate = N + cubeY;
        
//         // Compute the cube root and round to nearest integer.
//         long long x = llround(cbrt(candidate));
//         if (x > y && x * x * x == candidate) {
//             cout << x << " " << y << "\n";
//             return 0;
//         }
//     }
//     cout << -1 << "\n";
//     return 0;
// }
