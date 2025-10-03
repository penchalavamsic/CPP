#include<iostream>
using namespace std;
void myfunction(int b)
{
    cout <<b<<"\n";
}
void default_func(string a="Equal used for default function"){
    cout <<a;
}
main(){
    int a=10;
    myfunction(a);
    default_func();
}