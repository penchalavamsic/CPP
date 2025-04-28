#include<iostream>
using namespace std;
template <class My>
class Myclass{
    public:
    My first;
    My second;
    Myclass(My f, My s){
        first=f;
        second=s;
    }
};
main(){
    Myclass<string> stringobj("Hello","World");
    cout<<stringobj.first<<""<<stringobj.second<<"\n";
    Myclass<int> intobj(4,2);
    cout<<intobj.first<<""<<intobj.second;

}