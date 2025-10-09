//MultiLevel Inheritance
#include<iostream>
using namespace std;
class Movies{
   public:
    Movies(){
        cout<<"Movie generes"<<endl;
    }
};
class TFI: public Movies{
    public:
    TFI(){
        cout<<"Commercial"<<endl;
    }
};
class MFI:public TFI{
   public:
    MFI(){
        cout<<"Commercial + Story"<<endl;
    }
};
int main(){
    MFI m;
    return 0;
}