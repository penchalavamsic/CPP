#include<iostream>
using namespace std;
main(){
    int a;
    cin>>a;
    try{
        if(a>=18){
            cout<<"You are eligible to vote";
        }
        else{
            throw(a);
        }
    }
    catch(int a){
        cout<<"You are not eligible to vote";
    }
    
}