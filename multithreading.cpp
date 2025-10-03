#include<iostream>
#include<thread>
using namespace std;
void fun(){
    cout<<"Good morning" <<endl;
}
main(){
    thread t(fun);
    t.join();
    cout<<"Everyone";

}