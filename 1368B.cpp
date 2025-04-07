#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    long long k;
    cin >> k;

    string base = "codeforces";
    vector<int> counts(10, 1);
    long long product = 1;

    // Greedily increase the counts to reach at least k subsequences
    while (product < k) {
        for (int i = 0; i < 10 && product < k; ++i) {
            product /= counts[i];
            counts[i]++;
            product *= counts[i];
        }
    }

    // Construct the output string
    string result = "";
    for (int i = 0; i < 10; ++i) {
        result += string(counts[i], base[i]);
    }

    cout << result << endl;
    return 0;
}
