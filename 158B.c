#include<stdio.h>
int main(){
    int n, a, i=0, counter=0, val1=0, val2=0, val3=0, val4=0;
    scanf("%i", &n);
    while(i<n){
        scanf("%i", &a);

        if(a==1)val1++;
        else if(a==2)val2++;
        else if(a==3)val3++;
        else if(a==4)val4++;
        i++;
    }

    if(val4!=0){ counter+=val4; }
    while(val3!=0 && val1!=0){
        val3--;
        val1--;
        counter++;
    } if(val3!=0 && val1==0){ counter+=val3; }
    if(val2>1){
        counter+=val2/2;
        val2=val2%2;
    } if(val2!=0 && val1!=0){
        if(val1>1){
            val1=val1-2;
            --val2;
            counter++;;
        } else{
            --val1;
            --val2;
            counter++;
        }
    } if(val2==1 && val1==0){ counter++; }
    if(val3==0 && val2==0 && val1!=0){
        counter+=val1/4;
        val1=val1%4;
        if(val1!=0)counter++;
    } printf("%i", counter);
    return 0;
}
