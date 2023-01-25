#include<iostream>
#include<map>
using namespace std;

int main(){
    int n, acum=0, key = 0;
    string digit;
    map<int, int> m;
    string s;

    for(int i=1; i < 5; i++){
        cin >> n;
        m.insert({i, n});
    }
    cin >> s;
    for(int i=0; i < s.length(); i++ ){
        digit = s[i];
        key = stoi(digit, nullptr, 10);
        auto itr = m.find(key);
        acum += itr->second;
    }
    cout << acum << endl;
    return 0;
}
