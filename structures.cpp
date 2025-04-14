#include<iostream>
using namespace std;
struct{
    int a;
    string b;
}hello;
struct a{
    int c;
};
main(){
 hello.a=10;
 hello.b="hi";
 cout<<hello.a<<"\t"<<hello.b;
 a sample;
 sample.c=20;
 cout<<sample.c;
}