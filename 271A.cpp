#include<iostream>
#include<iterator>
#include<map>
using namespace std;

int main(){
    int y, current;

    map<int, int> digits;
    digits.insert(pair<int, int>(0, 0)); digits.insert(pair<int, int>(1, 0)); digits.insert(pair<int, int>(2, 0)); digits.insert(pair<int, int>(3, 0));
    digits.insert(pair<int, int>(4, 0)); digits.insert(pair<int, int>(5, 0)); digits.insert(pair<int, int>(6, 0)); digits.insert(pair<int, int>(7, 0));
    digits.insert(pair<int, int>(8, 0)); digits.insert(pair<int, int>(9, 0));

    cin >> y;

    for(int i=y+1; i<=9012; i++){ // 9012 is the greatest beautiful year for range 1K-9K
        current=i;
        auto itr = digits.find(current%10); // units
        itr->second+=1;
        current/=10;

        itr = digits.find(current%10);   // tens
        itr->second+=1;
        current/=10;

        itr = digits.find(current%10);  // hundreds
        itr->second+=1;
        current/=10;

        itr = digits.find(current%10);  // thousands
        itr->second+=1;
        current/=10;

        for(auto itr = digits.begin(); itr!= digits.end(); ++itr){
            if(itr->second >= 2) break; // Repeated digits
            if(itr->first == 9 && itr->second < 2){ // Found year
                cout << i;
                return 0;
            }
        } for(auto itr = digits.begin(); itr!= digits.end(); ++itr) itr->second = 0; // restart everything to 0
    } return 0;
}
