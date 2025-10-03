#include<iostream>
using namespace std;
class ramu{
    public:
    void output(){
        cout<<"Parent";
    }
};
class hari: public ramu{
    public:
    string detail="Son of";
    void output1(){
        cout<<"Ramu";
    }
};
class laxmi: public hari{
    public:
    void output2(){
        cout<<"Grand Daughter of ramu";
    }
};
main(){
    laxmi name;
    cout<<name.detail<<"\t";
    name.output1();
    name.output2();
}