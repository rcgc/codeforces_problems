#include<iostream>
#include<iterator>
#include<map>
using namespace std;

int main(){
    int n, aux, counter=0;
    map<int, int> children;
    children.insert({1,0}); children.insert({2,0}); children.insert({3,0}); children.insert({4,0});

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> aux;
        auto itr = children.find(aux);
        itr->second++;
    }
    auto itr4 = children.find(4);
    counter+= itr4->second;
    itr4->second=0;

    auto itr3 = children.find(3);
    auto itr2 = children.find(2);
    auto itr1 = children.find(1);

    while(itr3->second!=0 && itr1->second!=0){
        itr1->second--;
        itr3->second--;
        counter++;
    }
    if(itr3->second!=0 && itr1->second==0){
        counter+= itr3->second;
        itr3->second=0;
    }
    if(itr2->second>1){
        counter+=itr2->second/2;
        itr2->second=itr2->second%2;
    }
    if(itr2->second!=0 && itr1->second!=0){
        if(itr1->second>1){
            itr1->second=itr1->second-2;
            itr2->second--;
            counter++;
        } else{
            itr1->second--;
            itr2->second--;
            counter++;
        }
    }
    if(itr1->second == 0 && itr2->second == 1){
        counter++;
        itr2->second = 0;
    }
    if(itr1->second!=0){
        counter+=itr1->second/4;
        itr1->second=itr1->second%4;
        if(itr1->second != 0){
            counter++;
            itr1->second=0;
        }
    } cout << counter;
    return 0;
}
