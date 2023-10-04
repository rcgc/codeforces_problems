#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int ab, ac, bc, abc, a, b, c, numbers[4], n;
    cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3];

    n = sizeof(numbers) / sizeof(numbers[0]);
    sort(numbers, numbers + n, greater<int>());

    abc = numbers[0];
    ab  = numbers[1];
    ac  = numbers[2];
    bc  = numbers[3];

    a = abc - bc;
    b = abc - ac;
    c = abc - ab;

    cout << a << " " << b << " " << c << endl;
    return 0;
}
