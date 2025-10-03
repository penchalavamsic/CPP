#include<iostream>
using namespace std;
main(){
    int a[2][4]={
        {1,2,3,4},
        {4,3,2,1}
    };
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j];
        }
        cout<<"\n";
    }
}