//Dynamic integer
#include<iostream>
using namespace std;
int main(){
    int *p=new int; //dynamic integer
    *p=10;
    cout<<*p;
    delete p; //freeing memory
}