#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

// https://codeforces.com/blog/entry/91891
int main(){
    long long memo[100], t;
    cin >> t;

    memo[0]  = 0;
	memo[1]  = 1;
	memo[2]  = 11;
	memo[3]  = 111;
	memo[4]  = 1111;
	memo[5]  = 11111;
	memo[6]  = 111111;
	memo[7]  = 1111111;
	memo[8]  = 11111111;
	memo[9]  = 111111111;
	memo[10] = 1111111111;
	memo[11] = 11111111111;
	memo[12] = 111111111111;
	memo[13] = 1111111111111;

    while(t--) {
		long long n;
		cin >> n;

		// number of digits in the number
		long long ndigits = floor(log10(n)+1);

		// maximum possible unique numbers for a digit of length ndigits
		long long maxunos = ndigits * 9;

		// get the first digit of n
		long long fdigit = n/pow(10, ndigits-1);

		// get the unique number that starts with fdgit and ends with fdigit
		// and contains ndigits digits : 12345 -> 11111 ; 41234 -> 4444
		long long m =  memo[ndigits]*fdigit;

		// in case the given n is not a unique number, we need to analyze
		// what's the correct number of unique numbers present in the given
		// range. we need to do this, since maxunos needs to be corrected.
		long long neg = 0;

		if(n<m) neg = 9-fdigit+1;
		else if(n>=m) neg = 9-fdigit;

		// correct answer
		long long ans = maxunos - neg;

		cout << ans << endl;
	} return 0;
}
