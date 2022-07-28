#include<iostream>
using namespace std;

void fill_primes(int arr[50]){
    int i, j, k = 1; // k is primes array length
    bool res;

    for(i=3; i<=51; i++){
        res = true;
        for(j=0; j<k; j++){
            if(i % arr[j] == 0){
                res = false;
                break;
            }
        }
        if(res == true){
            arr[k] = i;
            ++k;
        }
    }
}

int find_prime_index(int arr[50], int n){
    for(int i=0; i<50; i++) if(arr[i] == n) return i;
    return -1;
}

int main(){
    int n, m, n_index=0;
    int arr[50];
    arr[0] = 2;
    fill_primes(arr);
    cin >> n >> m;

    n_index = find_prime_index(arr, n);
    arr[n_index+1] == m ? cout << "YES" : cout << "NO";
    return 0;
}
