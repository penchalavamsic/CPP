//sum of digits
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number";
    cin>>a;
    int sum=0;
    while(a>0){
        int temp=a%10;
        sum=sum+temp;
        a=a/10;
    }
    cout<<sum;
}