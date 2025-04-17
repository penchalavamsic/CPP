#include<iostream>
using namespace std;
main(){
    int* a= new int[5];
    for(int i=0;i<5;i++){
        a[i]=i+1;
    }
    for(int i=0;i<5;i++){
        cout<<a[i];
    }
    delete[] a;

}