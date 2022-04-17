#include<iostream>
#include<math.h>
#include<cmath>
#include<set>
using namespace std;

int main(){
    int t, n, res=0, j=0, counter=0, aux=0;
    set<int> numbers;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        while(n!=0){
            res = n%10;
            if (res != 0){
                aux = ceil(res * pow(10.0, j));
                numbers.insert(aux);
                counter++;
            } n/=10;
            j++;
        }
        cout << counter << endl;
        set <int>::iterator itr;
        int k = 1;
        for(itr = numbers.begin(); itr != numbers.end(); itr++){
            (k < numbers.size()) ? cout << *itr << " " : cout << *itr << endl;
            k++;
        }
        numbers.clear();
        counter = 0;
        j = 0;
    } return 0;
}
