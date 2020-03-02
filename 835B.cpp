#include <bits/stdc++.h>
using namespace std;
char s[100005];
int main() {
    int k, i=0,sum=0;
    scanf("%d %s",&k, s);
    sort(s,s+strlen(s));
    for(int i=0;s[i];i++) sum+=s[i]-'0';
    while(sum<k) sum+='9'-s[i++];
    cout<<i;
    return 0;
}
