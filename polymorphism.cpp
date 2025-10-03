#include<iostream>
using namespace std;
class animal{
    public:
    void voice(){
        cout<<"Hard voice";
    }
};
class dog : public animal{
    public:
    void voice(){
        cout<<"Barks";
    }
};
class bird: public dog{
    public:
    void voice(){
        cout<<"Hum";
    }
};
main(){
    animal a;
    dog d;
    bird b;
    a.voice();
    cout<<"\n";
    d.voice();
    cout<<"\n";
    b.voice();
}