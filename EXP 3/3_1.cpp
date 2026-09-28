#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    private:
    string owner;
    double balance;

    public:
    void openAccount(string name, double initial){
        owner = name;
        if(initial > 0){
            balance = initial;
        }
        else{
            balance = 0;
        }
    }


        void deposit(double amount)
        {
            if(amount > 0){
                balance = balance + amount;
            }
    }

    bool withdraw (double amount){
    if (amount>0 && amount<=balance){
        balance = balance - amount;
        return true;
    }
    return false;
}
    
string getOwner(){
    return owner;
}

double getBalance(){
    return balance;
}
};

int main(){
    BankAccount account;
    string name;
    double initialDeposit;
    double depositAmount;
    double validWithdrawal;

cout<< "Enter account holder's name: ";
getline(cin, name);

cout<< "Enter initial deposit amount: ";
cin>> initialDeposit;

account.openAccount(name, initialDeposit);

cout<< "Enter deposit amount: ";
cin>> depositAmount;

account.deposit(depositAmount);

cout << "\nEnter withdrawal amount: ";
cin >> validWithdrawal;

if(account.withdraw(validWithdrawal)){
    cout<< "Withdrawal successful." << endl;
}
else{
    cout<< "Withdrawal failed." << endl;
}
cout<< "\n ====ACCOUNT DETAILS===="<<endl;
cout<< "Account holder: " << account.getOwner() << endl;
cout<< "Final balance: " << account.getBalance() << endl;

return 0;
}