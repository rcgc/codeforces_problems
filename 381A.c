#include<stdio.h>

int main(){
    int n, arr[1000], sereja=0, dima=0, left=0, right;

    scanf("%i", &n);
    right = n - 1;

    for(int i=0; i<n; i++){
        scanf("%i", &arr[i]);
    }

    for(int i=0; i<n; i++){
        if (left > right) break;

        if (arr[left] > arr[right]){
            if ( i%2 == 0 ) sereja += arr[left];
            else dima += arr[left];
            left++;
        } else{
            if ( i%2==0 ) sereja += arr[right];
            else dima += arr[right];
            right--;
        }
    }

    printf("%i %i", sereja, dima);
    return 0;
}
