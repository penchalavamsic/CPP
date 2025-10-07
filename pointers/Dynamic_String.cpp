//Dynamic string
#include<iostream>
using namespace std;
int main(){
    char *str=new char[11]; //str new memory allocated
    cin.getline(str,11); //takes spaces and newline
    cout<<str; 
    delete []str;
    return 0;
}