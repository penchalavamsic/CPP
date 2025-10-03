#include<iostream>
using namespace std;
class shape{
    public:
        virtual void draw()=0;
};
class circle: public shape{
    public:
    void  draw() override{
        cout<<"Drawing a circle";

    }
};
class square: public shape{
    public:
    void draw() override{
        cout<<"Drawing a square";
    }
};
main(){
    circle c;
    square s;
    c.draw();
    s.draw();
}