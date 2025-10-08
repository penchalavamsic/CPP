//area and perimeter of rectangle
//area=l*b
//perimeter=2*(l+b)
#include<iostream>
using namespace std;
class Rectangle{
    public:
    float length;
    float breadth;
    void getDetails(){
        cout<<"Enter length and breadth"<<endl;
        cin>>length>>breadth;
    }
    float area(){
        return length*breadth;
    }
    float perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    Rectangle r;
    r.getDetails();
    cout<<"Area is "<<r.area()<<endl;
    cout<<"Perimeter is "<<r.perimeter()<<endl;
    return 0;
}