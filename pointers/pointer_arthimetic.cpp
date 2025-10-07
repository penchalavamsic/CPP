//pointer traversing in array
#include<iostream>
using namespace std;
int main(){
    int a[5]={1,5,6,8,7};
    int *p;
    p=&a[0]; //assigning address
    for(int i=0;i<5;i++){
        cout<<*p<<endl; //printing value
        p++;
    }
}