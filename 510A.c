#include<stdio.h>
int main(){
    int n, m, i, j;
    scanf("%i %i", &n, &m);
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++) (i%2==1) ? printf("#") : ((i/2)%2==1 && j==m) ? printf("#") : ((i/2)%2==0 && j==1) ? printf("#") : printf(".");
        printf("\n");
    } return 0;
}
