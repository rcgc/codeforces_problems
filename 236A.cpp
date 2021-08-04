#include<iostream>
#include<iterator>
#include<string>
#include<map>
using namespace std;

int main(){
    int counter = 0;
    string userName;

    map<char, int> users;
    users.insert(pair<char, int>('a', 0));    users.insert(pair<char, int>('b', 0));    users.insert(pair<char, int>('c', 0));
    users.insert(pair<char, int>('d', 0));    users.insert(pair<char, int>('e', 0));    users.insert(pair<char, int>('f', 0));
    users.insert(pair<char, int>('g', 0));    users.insert(pair<char, int>('h', 0));    users.insert(pair<char, int>('i', 0));
    users.insert(pair<char, int>('j', 0));    users.insert(pair<char, int>('k', 0));    users.insert(pair<char, int>('l', 0));
    users.insert(pair<char, int>('m', 0));    users.insert(pair<char, int>('n', 0));    users.insert(pair<char, int>('o', 0));
    users.insert(pair<char, int>('p', 0));    users.insert(pair<char, int>('q', 0));    users.insert(pair<char, int>('r', 0));
    users.insert(pair<char, int>('s', 0));    users.insert(pair<char, int>('t', 0));    users.insert(pair<char, int>('u', 0));
    users.insert(pair<char, int>('v', 0));    users.insert(pair<char, int>('w', 0));    users.insert(pair<char, int>('x', 0));
    users.insert(pair<char, int>('y', 0));    users.insert(pair<char, int>('z', 0));

    cin >> userName;

    for(int i=0; i< userName.length(); i++){
        auto itr = users.find(userName[i]);
        itr->second +=1;
    }
    for(auto itr = users.begin(); itr != users.end(); ++itr) if(itr->second != 0) counter++;

    (counter%2==0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
    return 0;
}
