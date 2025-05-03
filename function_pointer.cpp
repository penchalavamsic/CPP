#include<iostream>
using namespace std;
void greet(){
    cout<<"Hello, What's up!";
}
main(){
    void (*funcPtr)()=greet;//syntax
    funcPtr();
}