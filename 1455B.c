#include <stdio.h>
long long int arr[1000001];

int triangular(long int x){ // If x is a triangular number
    int value=-1;
    for(int j=0; j<1000001; j++){
        if(x==arr[j]){ value=j; break; }
        else if(x<arr[j]) break;
    } return value;
}

int next_triangular(long int x){ // Index of next triangular number
    int value=-1;
    for(int j=0; j<1000001; j++){
        if(x<arr[j]){ value=j; break;}
    } return value;
}

int main(){
    int t, t_index=0;
    long long int x;

    for(int i=0; i<=1000000; i++) arr[i] = (i*(i+1))/2;
    scanf("%i", &t);

    for(int i=0; i<t; i++){
        scanf("%lli", &x);

        t_index = triangular(x);
        if(t_index!=-1){ printf("%i\n", t_index); continue; }

        t_index = next_triangular(x);
        if(arr[t_index]-1==x || arr[t_index]+1==x) printf("%i\n", t_index+1);
        else printf("%i\n", t_index);
    } return 0;
}
