//Multiple inheritance
#include<iostream>
using namespace std;
class One{
    public:
       void  O(){
            cout<<"1"<<endl;
        }
};
class Two{
    public:
    void T(){
        cout<<"2"<<endl;;
    }
};
class Three :public One, public Two{ //multiple inheritance
    public:
    Three(){
        cout<<"3"<<endl;
    }
};
int main(){
    Three t;
    t.O();
    t.T();
}
