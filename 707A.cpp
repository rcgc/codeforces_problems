#include<iostream>
#include<iterator>
#include<map>
using namespace std;

int main(){
    int n, m;
    char color;
    map<char, int> mapa;
    mapa.insert({'C', 0});  mapa.insert({'M', 0});  mapa.insert({'Y', 0});
    mapa.insert({'W', 0});  mapa.insert({'G', 0});  mapa.insert({'B', 0});

    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> color;
            auto it = mapa.find(color);
            it->second++;
        }
    } auto it1 = mapa.find('C');  auto it2 = mapa.find('M');  auto it3 = mapa.find('Y');

    if(it1->second>0 || it2->second>0 || it3->second>0) cout << "#Color" << endl;
    else cout << "#Black&White" << endl;
    return 0;
}
