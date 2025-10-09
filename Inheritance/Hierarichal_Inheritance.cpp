//Hirerichal Inheritance
#include<iostream>
using namespace std;
class Name{
    public:
     Name(){
        cout<<"My name is Harish"<<endl;
    }
};
class Age:public Name{
    public:
    Age(){
        cout<<"\nMy age is 23";
    }
};
class ID:public Name{
    public:
    ID(){
        cout<<"123456"<<endl;
    }
};
int main(){
    ID i;
    Age a;

}