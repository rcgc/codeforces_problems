#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    int lowerCase=0, upperCase=0;
    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(s[i]>=65 && s[i]<=90) upperCase++;
        else lowerCase++;
    }
    if(upperCase>lowerCase){
        for(int i=0; i< s.length(); i++) s[i] = toupper(s[i]);
    }else{
        for(int i=0; i< s.length(); i++) s[i] = tolower(s[i]);
    }
    cout << s;
    return 0;
}
