//swapping of numbers using pointers
#include<iostream>
using namespace std;
int swap(int *a, int *b){
    int temp;
    //assigning values
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=10, b=20;
    swap(&a, &b);
    cout<<a<<" "<<b;

}