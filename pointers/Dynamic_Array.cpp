//Dynamci array
#include<iostream>
using namespace std;
int main(){
    int *p=new int[5]; //array of 5 integers
    for(int i=0;i<5;i++){
        p[i]=i+1;
    }
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    delete []p;

}