#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n, counter=0;
    char cad[4];

    scanf("%i%*c", &n);
    for(int i=0; i<n; i++){
        scanf("%s", cad);

        if(strstr(cad, "++") != NULL) counter++;
        else counter--;
    }
    printf("%i", counter);
    return 0;
}
