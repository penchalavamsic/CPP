//finding vowels using string lenght
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int c=0;
    cout<<"Enter a string"<<endl;
    getline(cin, s); //taking input
    for(int i=0;i<s.length();i++){ //using length function
        char ch=tolower(s[i]); //storing into array
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            c++;
        }

    }
    cout<<"Number of vowels in the string: "<<c;

}