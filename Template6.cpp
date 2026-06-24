/*Bank Account
Create class BankAccount
WHO HAS Members AS Name,Balance and then
Overload +
Meaning
Two accounts combine.
Example
5000
8000
Result
13000*/
#include<iostream>
using namespace std;
class BankAccount{
    public:
    string name;
    float balance;
    //constructor
    BankAccount(string n,float b){
        name=n;
        balance=b;
    }
    //overloading 
    friend BankAccount operator+ (BankAccount &B1,BankAccount &B2){
        BankAccount b3("Zahid",0);
        b3.balance=B1.balance+B2.balance;
        return b3;
    }
};
int main(){
    BankAccount b1("Tehrain",34000);
    BankAccount B2("Ahad",4444000);
    BankAccount B3=b1+B2;
    cout<<"combined balance"<<B3.balance<<endl;
    return 0;
}