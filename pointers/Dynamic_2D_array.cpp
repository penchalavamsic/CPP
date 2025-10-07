//Dynamic 2D array
#include<iostream>
using namespace std;
int main(){
    int rows, cols;
    cout<<"Enter rows and cols";
    cin>>rows>>cols;
    int **p=new int*[rows];//allocating rows
    for(int i=0;i<rows;i++){
        p[i]=new int[cols]; //allocating cols;
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            p[i][j]=i+j;
        }
    }
    cout<<"array values are"<<endl;
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<p[i][j]<<" ";
        }
    }
    for(int i=0;i<rows;i++){
        delete[]p[i]; //deallocating cols
    }
    delete []p; //deallocating rows
}