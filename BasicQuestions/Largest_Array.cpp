//Largest number in array
#include<iostream>
using namespace std;
int main(){
    int n, max;
    cout<<"Enter n value\n";
    cin>>n;
    int a[n],i;
    cout<<"Enter values into array\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"Largest number is "<<max;
    return 0;


}