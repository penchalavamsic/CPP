#include<iostream>
using namespace std;
int over(int x, int y){
    return x+y;
}
float over(float x, float y){
    return x*y;
}
main()
{
    int a=over(10, 20);
    float b=over(10.22, 2.02);
}