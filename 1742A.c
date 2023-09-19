#include<stdio.h>

int main(){
    int t, a, b, c;

    scanf("%i", &t);
    for(int i=0; i<t; i++){
        scanf("%i %i %i", &a, &b, &c);

        if(a >= b && a >= c) a == b + c ? printf("YES\n") : printf("NO\n");
        else if(b >= a && b >= c) b == a + c ? printf("YES\n") : printf("NO\n");
        else c == a + b ? printf("YES\n") : printf("NO\n");
    }
    return 0;
}
