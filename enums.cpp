#include<iostream>
using namespace std;
enum a{
    enums,
    stores=10,
    constants
};
int main()
{
    enum a var=stores;
    cout<<var;
}
