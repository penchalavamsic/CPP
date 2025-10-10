//Pure virtual function
#include<iostream>
using namespace std;
//abstract class 
class Shapes{
    public:
    virtual void draw()=0; //pure virtual class
};
class Circle:public Shapes{
    public:
   void  draw(){
        cout<<"Circle drawn"; //overiding 
    }
};
int main(){
    Shapes *s;
    Circle c;
    s=&c;
    s->draw();

}

