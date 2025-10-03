#include<iostream>
using namespace std;
class speci{
    public:
    int x;
    private:
    string a;
};
main(){
    speci b;
    b.x=10;
    b.a="hi";
    cout<<b.x<<b.a;/*cannot access due to private*/
}