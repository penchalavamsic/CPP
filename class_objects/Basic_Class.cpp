//Basic Class 
#include <iostream>
#include<string.h>
using namespace std;
class Car{ //car class
    public: 
    string name;
    float speed;
    void getDetails(){
        cout<<"Enter name";
        getline(cin,name); cout<<endl;//takes spaces and new line
        cout<<"Enter speed";
        cin>>speed;
        cin.ignore(); //ignores the new lines
    }
    void display(){
        cout<<name<<endl;
        cout<<speed<<endl;

    }
};
int main(){ 
    Car d1, d2; //object about the class
    d1.getDetails(); //calling the function
    cin.ignore();
    d2.getDetails();
    d1.display();
    d2.display();
    return 0;   
    
}