#include<iostream>
using namespace std;
class sample{
    public:
    sample(){
        cout <<"constructor";
    }
    ~sample(){
        cout<<"destructor";
    }
};
int main(){
    
    sample test;
    return 0;
}