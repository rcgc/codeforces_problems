#include<iostream>
using namespace std;

int find_max_index(int arr[4]){
    int max_index = -1;
    int max_value = 0;

    for(int i=0; i<4; i++){
        if(arr[i] > max_value){
            max_value = arr[i];
            max_index = i;
        }
    } return max_index;
}

int main(){
    int t, arr[4], first_max_index, second_max_index;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

        first_max_index = find_max_index(arr);
        arr[first_max_index] = -1;

        second_max_index = find_max_index(arr);

        if( first_max_index + second_max_index == 1 || first_max_index + second_max_index == 5 ) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
