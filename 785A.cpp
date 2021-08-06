#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main(){
    int n, acum(0);
    string name;

    map<string, int>polyhedrons;
    polyhedrons.insert(pair<string, int>("Tetrahedron", 0));
    polyhedrons.insert(pair<string, int>("Cube", 0));
    polyhedrons.insert(pair<string, int>("Octahedron", 0));
    polyhedrons.insert(pair<string, int>("Dodecahedron", 0));
    polyhedrons.insert(pair<string, int>("Icosahedron", 0));

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> name;
        auto itr = polyhedrons.find(name);
        itr->second+=1;
    }

    for(auto itr = polyhedrons.begin(); itr != polyhedrons.end(); ++itr){
        if(itr->first == "Tetrahedron") acum += itr->second * 4;
        else if(itr->first == "Cube") acum += itr->second * 6;
        else if(itr->first == "Octahedron") acum += itr->second * 8;
        else if(itr->first == "Dodecahedron") acum += itr->second * 12;
        else if(itr->first == "Icosahedron") acum += itr->second * 20;
    }
    cout << acum;
    return 0;
}
