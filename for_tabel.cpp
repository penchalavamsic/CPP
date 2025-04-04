#include<iostream>
#include<format>
using namespace std;
main(){
    int a=2;
    for(int i=1;i<=10;i++){
        cout<<std::format("{}*{}={}\n",a,i,a*i);
    }
}