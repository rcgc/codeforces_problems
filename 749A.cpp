#include<iostream>
using namespace std;
int main(){
    int n,r,re,i;
    cin >> n;
    if(n%2==0){
        re=n/2;
        cout<<re<<endl;
        for(i=1;i<=re;i++) cout<<"2 ";
    }else{
        r=(n-3);
        re=(r/2);
        cout<<re+1<<endl;
        for(i=1;i<=re;i++) cout<<"2 ";
        cout<<"3"<< endl;
    }return 0;
}
