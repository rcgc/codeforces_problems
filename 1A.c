#include<stdio.h>

int main(){
    unsigned long long n, m, a, nHeight=0, mWidth=0;

    scanf("%lld", &n);
    scanf("%lld", &m);
    scanf("%lld", &a);

    if(n%a != 0) nHeight = (n/a)+1;
    else nHeight = (n/a);

    if(m%a != 0) mWidth = (m/a)+1;
    else mWidth = (m/a);

    printf("%lld", nHeight * mWidth);

    return 0;
}
