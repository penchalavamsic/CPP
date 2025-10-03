//palindrome

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a number";
    cin>>a;
    b=a;
    int rev=0;
    while(a!=0){
        int temp=a%10;
        rev=rev*10+temp;
        a=a/10;
    }
    if(b==rev)
        cout<<"Number is palindrome";
    else
        cout<<"Number is not palindrome";
}