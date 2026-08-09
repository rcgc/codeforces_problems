#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX_N = 1000000 / 3;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<long long> dp(MAX_N + 1, 0);

    dp[0] = 1;

    for (int i = 1; i <= MAX_N; i++) {
        for (int prefix = 1; prefix <= 8; prefix++) {
            if (i - prefix >= 0) {
                dp[i] = (dp[i] + dp[i - prefix]) % MOD;
            }
        }
    }

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        cout << dp[N / 3] << '\n';
    }

    return 0;
}
