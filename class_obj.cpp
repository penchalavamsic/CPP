#include<iostream>
using namespace std;
class car{
    public:
    int number;
    string name;
};
main(){
    car details;
    details.number=2002;
    details.name="volvo";
    car new_details;

    new_details.number=2003;
    new_details.name="Benz";

    cout<<new_details.name<<"\n";
    cout<<details.number;

}