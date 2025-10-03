#include<iostream>
using namespace std;
void swap(int &x, int &y){
    int z=x;
    x=y;
    y=z;
    cout<<x <<y;
    
}
main()
{
    int x,y;
    swap(x=10,y=20);
    
}