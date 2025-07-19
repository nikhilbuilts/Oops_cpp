#include<iostream>
using namespace std;

class BankAccount{
  private:
  string accountHolder;
  int accountNumber;
  double balance;

  private:
  BankAccount(string name, int accNo, double initialBalance){
    accountHolder = name;
    accountNumber = accNo;
    balance = initialBalance;
    cout<<"Account created successfully for: "<<accountHolder<<endl;
  }

  void deposit(double amount){
    if(amount>0){
      balance = balance + amount;
      cout<<"Deposited: "<<amount<<". New Balance: "<<balance<<endl;
    }
    else{
      cout<<"Invalid deposit amount";
    }
  }

  void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ". New Balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds.\n";
        }
    }

  void display() {
        cout << "\n--- Account Details ---\n";
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Account of " << accountHolder << " is now closed.\n";
    }

};
