//Dynamic function array 
#include<iostream>
using namespace std;
int *ArrayFun(int n){ //function return dynamic array
    int *arr1=new int[n]; //dynamic array
    for(int i=0;i<n;i++){
        arr1[i]=i+1;
    }
    return arr1;
}
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int *arr=ArrayFun(n); //dynamic function array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    delete []arr;
}