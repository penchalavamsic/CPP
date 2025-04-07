#include<iostream>
using namespace std;
main(){
    vector<int> a={1,2,3};
    a.push_back(4);
    for(int i:a){
        cout<<i;
    }
}