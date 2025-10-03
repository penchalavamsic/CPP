//Reverse a number
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number";
    cin>>a;
    int rev=0;
    while(a!=0){
        int temp=a%10;
        rev=rev*10+temp;
        a=a/10;
    }
    cout<<rev;
}