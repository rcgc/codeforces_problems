#include<iostream>
using namespace std;

int main(){

    long long n,i,k,ans=0,cnt=0;
    cin>>n;
    long long a[n];
    a[0]=0, a[n+1]=1001;

    for(i=1;i<=n;i++) cin>>a[i];

    for(i=1;i<=n;i++){
        if(a[i]==a[i-1]+1 && a[i]==a[i+1]-1 ){
            cnt++;
            ans=max(ans,cnt);
        }
        else cnt=0;
    }

    cout<<ans<<endl;
    return 0;
}
