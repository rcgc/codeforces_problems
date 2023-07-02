#include<stdio.h>

int main(){
    int t, a, b, c;
    scanf("%i", &t);
    while(t--){
        scanf("%i %i %i", &a, &b, &c);
        c > a ? printf("+\n") : printf("-\n");
    }
    return 0;
}
