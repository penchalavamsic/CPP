#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
    ofstream myFile("testing.txt");
    myFile<<"ofstream is used for writing and appeding the files";
    myFile<<"in CPP";
    myFile.close();
    string line;
    ifstream("testing.txt");
    if(myFile.is_open()){
        while(getline(myFile, line)){
            cout<<line<<endl;
        }
        myFile.close();
    }
    
}