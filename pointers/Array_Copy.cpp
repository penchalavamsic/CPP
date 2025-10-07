//copying arrays
#include<iostream>
using namespace std;
int main(){
    int *a1=new int[5];
    for(int i=0;i<5;i++){
        a1[i]=i+1;
    }
    int *a2=new int[6];
    for(int i=0;i<6;i++){
        a2[i]=a1[i]; //copying a1 to a2
    }
   for(int i=0;i<6;i++){
        cout<<a2[i]<<" ";
    }
    delete []a1;
    delete []a2;
    return 0;

}