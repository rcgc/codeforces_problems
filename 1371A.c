#include<stdio.h>

int main(){
    int t, n;
    scanf("%i", &t);
    for(int i=0; i<t; i++){
        scanf("%i", &n);
        n % 2 == 0 ? printf("%i\n", (n/2)) : printf("%i\n", (n/2)+1);
    }
    return 0;
}
