//simple inheritance
#include<iostream>
using namespace std;
class Name{
    public:
     Name(){
        cout<<"My name is Harish";
    }
    void Address(){
        cout<<"\nMy address is Nellore";
    }
};
class Age:public Name{
    public:
    Age(){
        cout<<"\nMy age is 23";
    }
};
int main(){
    Age a; //calls constructor defaultly
    a.Address(); //calling parent class function

}