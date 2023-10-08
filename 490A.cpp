#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int count_teams(map<int, int> &m, int n, int arr[5000]){
    int n_teams = 5000;

    m.insert({1, 0});
    m.insert({2, 0});
    m.insert({3, 0});

    for (int i=0; i < n; i++){
        auto itr1 = m.find(arr[i]);
        itr1->second++;
    }

    for(auto itr2 = m.begin(); itr2 != m.end(); itr2++) if(itr2->second < n_teams) n_teams = itr2->second;
    return n_teams;
}

int main(){
    map<int, int>m;
    int n, arr[5000], n_teams, programming=0, maths=0, pe=0;

    cin >> n;

    for(int i=0; i < n; i++) cin >> arr[i];

    n_teams = count_teams(m, n, arr);
    cout << n_teams << endl;

    if (n_teams > 0){
        for(int i=0; i < n_teams; i++){
            for (int j=0; j < n; j++){
                if(programming == 0 && arr[j] == 1){
                    programming = j+1;
                    arr[j] = 0;
                    continue;
                }
                if(maths == 0 && arr[j] == 2){
                    maths = j+1;
                    arr[j] = 0;
                    continue;
                }
                if(pe == 0 && arr[j] == 3){
                    pe = j+1;
                    arr[j] = 0;
                    continue;
                }
                if(programming != 0 && maths != 0 && pe != 0) break;
            }
            cout << programming << " " << maths << " " << pe << endl;
            programming = 0;
            maths = 0;
            pe = 0;
        }
    }
    return 0;
}
