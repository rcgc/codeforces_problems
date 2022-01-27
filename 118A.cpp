#include<iostream>
#include<iterator>
#include<map>
using namespace std;

int main(){
    map<char, int>m;
    m.insert({'a', 0}); m.insert({'e', 0}); m.insert({'i', 0}); m.insert({'o', 0}); m.insert({'u', 0}); m.insert({'y', 0});
    m.insert({'A', 0}); m.insert({'E', 0}); m.insert({'I', 0}); m.insert({'O', 0}); m.insert({'U', 0}); m.insert({'Y', 0});

    string s, result="";
    cin >> s;

    for(int i=0; i<s.length(); i++){
        auto itr = m.find(s[i]);
        if(itr == m.end()){
            result.push_back('.');

            if(s[i]<97) result.push_back( tolower(s[i]) );
            else result.push_back(s[i]);
        }
    } cout << result << endl;
    return 0;
}
