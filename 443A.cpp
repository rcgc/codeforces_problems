#include<iostream>
#include<iterator>
#include<string>
#include<map>
using namespace std;

int main(){
    int counter = 0;
    string str;

    map<char, int> letters;
    letters.insert(pair<char, int>('a', 0));    letters.insert(pair<char, int>('b', 0));    letters.insert(pair<char, int>('c', 0));
    letters.insert(pair<char, int>('d', 0));    letters.insert(pair<char, int>('e', 0));    letters.insert(pair<char, int>('f', 0));
    letters.insert(pair<char, int>('g', 0));    letters.insert(pair<char, int>('h', 0));    letters.insert(pair<char, int>('i', 0));
    letters.insert(pair<char, int>('j', 0));    letters.insert(pair<char, int>('k', 0));    letters.insert(pair<char, int>('l', 0));
    letters.insert(pair<char, int>('m', 0));    letters.insert(pair<char, int>('n', 0));    letters.insert(pair<char, int>('o', 0));
    letters.insert(pair<char, int>('p', 0));    letters.insert(pair<char, int>('q', 0));    letters.insert(pair<char, int>('r', 0));
    letters.insert(pair<char, int>('s', 0));    letters.insert(pair<char, int>('t', 0));    letters.insert(pair<char, int>('u', 0));
    letters.insert(pair<char, int>('v', 0));    letters.insert(pair<char, int>('w', 0));    letters.insert(pair<char, int>('x', 0));
    letters.insert(pair<char, int>('v', 0));    letters.insert(pair<char, int>('w', 0));    letters.insert(pair<char, int>('x', 0));
    letters.insert(pair<char, int>('y', 0));    letters.insert(pair<char, int>('z', 0));

    getline(cin, str);

    for(int i=0; i< str.length(); i++){
        if(str[i]>=97 && str[i]<=122){
            auto itr = letters.find(str[i]);
            itr->second +=1;
        }
    }
    for(auto itr = letters.begin(); itr != letters.end(); ++itr) if(itr->second != 0) counter++;

    cout << counter;
    return 0;
}
