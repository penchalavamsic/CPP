#include<iostream>
using namespace std;
main()
{
    int a[5]={1,23,4,5,6};
    for(int i=0;i<5;i++){
        cout<<a[i]<<"\n";
    }
    string b[4]={"CPP","is","a","OOP"};
    for(string i:b){
        cout<<i<<"\t";
    }
}