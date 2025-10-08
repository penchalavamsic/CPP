//Book management
#include<iostream>
using namespace std;
class Book{
    public:
    string title, auth;
    int price;
    void input(){
        cout<<"enter title: ";
        getline(cin, title);
        cout<<"enter author name: ";
        getline(cin, auth);
        cout<<"enter price: ";
        cin>>price;
        cin.ignore();
    }
    void display(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<auth<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main(){
    Book b[5];
    for(int i=0;i<5;i++){
        cout<<"Book "<<i+1<<endl; //input
        b[i].input();
    }
    cin.ignore();
    for(int i=0;i<5;i++){
        cout<<"**BooK "<<i+1<<"**"<<endl;
        b[i].display(); //displaying
    }
    int max=0;
    for(int i=1;i<5;i++){
        
       if( b[i].price>b[max].price){ //finding highest priced book
        max=i; 
        }
    }
    cout<<"Highest price book"<<endl;
    cout<<b[max].title;
}
