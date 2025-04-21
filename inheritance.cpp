#include<iostream>
using namespace std;
class vehicle{
    public:
    string name="ford";
    void honk(){
        cout<<"Tut tut"<<"\n";
    }

};
class new_vehicle: public vehicle{
    public:
    string a_name="Benz";

};
main(){
    new_vehicle model;
    model.honk();
    cout<<model.name+" "+ model.a_name;
}