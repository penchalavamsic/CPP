#include<iostream>
using namespace std;
class ipl{
    public:
    void details(){
        cout<<"Indian Premier League";
    }
};
class year{
    public:
    void y_details(){
        cout<<"is started in 2008";
    }
};
class speciality: public ipl, public year{
    public:
    void special(){
        cout<<"and biggest cricket in the world";
    }
};
main(){
    speciality ot;
    ot.details();
    ot.y_details();
    ot.special();
}