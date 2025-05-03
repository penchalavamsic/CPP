#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main(){
    vector<int> v={12,67,3,0,4};
    sort(v.begin(), v.end(), [](const int& a, const int&b){
        return a>b;
    });
    for (int x:v)
    cout<<x<<" ";

}