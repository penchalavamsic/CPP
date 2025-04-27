#include<iostream>
#include<ctime>
using namespace std;
main(){
    time_t timestamp;
    time(&timestamp);
    cout<<ctime(&timestamp);
    cout<<&timestamp;
}