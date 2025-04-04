#include<iostream>
using namespace std;
main()
{
    int a=123;
    int b=0;
    cin >>a;
    while(a>0)
    {
        int c=a%10;
        b=b*10+c;
        a=a/10;
    }
    cout <<b;
}