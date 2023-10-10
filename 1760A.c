#include<stdio.h>
int main(){
    int t, a, b, c;
    scanf("%i", &t);

    for(int i=0; i<t; i++){
        scanf("%i %i %i", &a, &b, &c);
        if((b <= a && a <= c) || (c <= a && a <= b)) printf("%i\n", a);
        else if((a <= b && b <= c) || (c <= b && b <= a)) printf("%i\n", b);
        else if((a <= c && c <= b) || (b <= c && c <= a)) printf("%i\n", c);
    }
    return 0;
}
