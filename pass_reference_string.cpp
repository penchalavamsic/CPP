#include<iostream>
using namespace std;
void str_ref(string &a){
    a +="Whats up";
}
main(){
    string a="Hey";
    str_ref(a);
    cout <<a;
}