//Runtime Polymorphism
#include<iostream>
using namespace std;
class Shape{
    public:
    float radius, length, breadth;
    Shape(float r, float l, float b){
       radius=r;
       length=l;
       breadth=b;
    }
    virtual void area(){};
    virtual ~Shape(){
        cout<<"Shape deleted"<<endl;
    }
};
class Circle:public Shape{
    public:
    float C_area;
    Circle(float r):Shape(r, 0, 0){} //calling base constructor 
    void area() override{
        C_area=3.14*radius*radius ;
        cout<<C_area<<endl;
    }
    virtual ~Circle(){
        cout<<"Circle deleted"<<endl;
    }
};
class Rectangle:public Shape{
    public:
    float R_area;
    Rectangle(float l, float b):Shape(0, l, b){} //calling base constructor 
    void area() override{
        R_area=length*breadth;
        cout<<R_area<<endl;
    }
    virtual ~Rectangle(){
        cout<<"Rectangle deleted"<<endl;
    }
};
int main(){
    Shape *s;
    Circle c(5.3);
    Rectangle r(2,3);
    s=&c;
    s->area(); //pointing to circle
    s=&r;
    s->area();//pointing to rectangle
}