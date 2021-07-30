#include<iostream>
#include<iterator>
#include<map>
using namespace std;

int main(){
    int n, counter = 0;
    string color;

    // empty map container
    map<string, int> gauntlet;

    gauntlet.insert(pair<string, int>("purple", 0));
    gauntlet.insert(pair<string, int>("green", 0));
    gauntlet.insert(pair<string, int>("blue", 0));
    gauntlet.insert(pair<string, int>("orange", 0));
    gauntlet.insert(pair<string, int>("red", 0));
    gauntlet.insert(pair<string, int>("yellow", 0));

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> color;
        auto itr = gauntlet.find(color);
        itr->second = 1;
    }

    for(auto itr = gauntlet.begin(); itr != gauntlet.end(); ++itr){
        if(itr->second == 0) counter++;
    }
    cout << counter << endl;

    for(auto itr = gauntlet.begin(); itr != gauntlet.end(); ++itr){
        if(itr->second == 0){
            if(itr->first == "purple")  cout << "Power" << endl;
            if(itr->first == "green")   cout << "Time" << endl;
            if(itr->first == "blue")    cout << "Space" << endl;
            if(itr->first == "orange")  cout << "Soul" << endl;
            if(itr->first == "red")     cout << "Reality" << endl;
            if(itr->first == "yellow")  cout << "Mind" << endl;
        }
    }
    return 0;
}
