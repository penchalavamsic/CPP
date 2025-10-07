//passing a pointer to function
#include<iostream>
using namespace std;
int passing(int *a){
   *a=20;
    
}
int main(){
    int *p, a=10;
    p=&a;
    passing(p);
    cout<<a;
}