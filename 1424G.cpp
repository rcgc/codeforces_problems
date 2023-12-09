#include<iostream>
#include<iterator>
#include<map>
using namespace std;

int main(){
    long n;
    cin >> n;
    map<long, long> m;

    for(long p = 0; p < n; p++){
        long b, d;
        cin >> b >> d;
        ++m[b];
        --m[d];
    }

    long counter=0, max_population=0, when=0;
    for(auto itr = m.begin(); itr != m.end(); itr++){
        long year = itr->first;
        long diff = itr->second;
        counter += diff;
        if(counter > max_population){
            max_population = counter;
            when = year;
        }
    }
    cout << when << " " << max_population << endl;
    return 0;
}
