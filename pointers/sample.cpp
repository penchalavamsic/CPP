//pointers 
#include <iostream>
using namespace std;
int main(){
    int a=10,b=20, *p;
    p=&b;
    cout<<*p<<endl;
    p=&a;
    cout<<*p;

}