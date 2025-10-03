//Arthimetic operations
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"Choose one option\n";
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division"<<endl;
    cin>>c;
    switch(c){
        case 1:
            cout<<a+b;
            break;
        case 2:
            cout<<a-b;
            break;
        case 3:
            cout<<a*b;
            break;
        case 4:
            cout<<a/b;
            break;
    }
}