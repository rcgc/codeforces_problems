#include<iostream>
using namespace std;

bool isTriple(int n){
    if(n%3 == 0) return false;
    return true;
}

bool endsWithThree(int n){
    string s = to_string(n);
    if (s[s.length()-1]=='3') return false;
    return true;
}

void fill_array(int arr[1000]){
    int c(0);
    for(int i=1; c<1000; i++){
        if(isTriple(i) && endsWithThree(i)){
            arr[c] = i;
            c++;
        }
    }
}

int main(){
    int t, k, arr[1000];

    fill_array(arr);

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> k;
        cout << arr[k-1] << endl;
    }
    return 0;
}
