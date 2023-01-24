#include<stdio.h>

int main(){
    int t, a, b, c, d, counter=0;

    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(b > a) counter++;
        if(c > a) counter++;
        if(d > a) counter++;
        printf("%d\n", counter);
        counter = 0;
    }
    return 0;
}
