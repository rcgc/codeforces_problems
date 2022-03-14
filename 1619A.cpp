#include<iostream>
using namespace std;

int check_even_palindrome(string s){
    int k = s.length()/2;
    for(int j=0; j<s.length()/2; j++){
        if(s[j] != s[k]) return 0;
        k++;
    } return 1;
}

int main(){
    string s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        if(s.length()%2 != 0) cout << "NO" << endl;
        else check_even_palindrome(s) == 1 ? cout << "YES" << endl : cout << "NO" << endl;
    } return 0;
}
