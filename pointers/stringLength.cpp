//string length using char pointer
#include<iostream>
using namespace std;
int main(){
    char str[]="Hello world"; //c style string
    int i=0;
    int count=0;
    char *p=str; //pointing to first element
    while(*p!='\0'){ //checking upto last element
        count++;
        p++;
    }
    cout<<count;
}