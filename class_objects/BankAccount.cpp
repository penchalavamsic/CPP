//Bank Account operations
#include<iostream>
using namespace std;
class BankAccount{
    public:
    int dep, wd;
    static double balance; //static members
    static int accountNumber; 

    void deposit(){
        cout<<"***Deposit***"<<endl;
        cout<<"Enter amount: ";
        cin>>dep;
        cout<<"****Total balance****"<<endl;
        cout<<balance+dep<<endl;
    }
    void withdraw(){
        cout<<"Enter amount to withdraw: "<<endl;
        cin>>wd;
        if(balance<wd){
            cout<<"Insufficient balance";
            
        }
        else{
            cout<<"Total balance: "<<balance-wd<<endl;
        }
    }
    void displayBalance(){
        cout<<"****Available balance****"<<endl;
        cout<<balance<<endl;
    }
};
double  BankAccount::balance=2502.6; //static members cannot intialize in class as per rules
int BankAccount::accountNumber=152367;
int main(){
    BankAccount b;
    b.displayBalance();
    b.deposit();
    b.withdraw();
}