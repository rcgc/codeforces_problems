#include<iostream>
#include<iterator>
#include<map>
using namespace std;

void count_letters(map<char, int> &m, string str){
    for(int i=0; i<str.length(); i++){
        auto itr = m.find(str[i]);
        if(itr == m.end()) m.insert({str[i], 1});
        else itr->second++;
    }
}

void rest_letters(map<char, int> &m, string str){
    for(int i=0; i<str.length(); i++){
        auto itr = m.find(str[i]);
        if(itr == m.end()) m.insert({str[i], -1});
        else itr->second--;
    }
}

int main(){
    map<char, int> m;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    count_letters(m, s1);
    count_letters(m, s2);
    rest_letters(m, s3);

    for(auto itr = m.begin(); itr != m.end(); itr++){
        if(itr->second != 0){
            cout << "NO" << endl;
            return 0;
        }
    } cout << "YES" << endl;
    return 0;
}
