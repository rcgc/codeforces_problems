#include<stdio.h>
int main(){
    int n, a, b, c, i, counter=0;
    scanf("%i", &n);
    for(i=0; i<n; i++){
        scanf("%i %i %i", &a, &b, &c);
        if(a&&b || a&&c || b&&c) counter++;
    }printf("%i", counter);
    return 0;
}
