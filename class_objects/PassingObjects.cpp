//passing object as arguments
#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int img;
    int addValue;
    Complex(int r, int i){
        real=r;
        img=i;
    }
    void add(Complex c){
        addValue=c.real+c.img;
        cout<<addValue;
    }
};
int main(){
    Complex c1(10,20);
    Complex c2(50,60);
    cout<<"**Before**";
    c1.add(c1); //passing object to function
    cout<<endl;
    cout<<"**After**";
    c1.add(c2); //passing object to function
    return 0;
}