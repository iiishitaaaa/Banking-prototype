#include "Utility.hpp"
#include <iostream>
using namespace std;

void display(const std::vector<Account> &account)
{
    cout << "Account" << endl;
    for (const auto &acc: account)
        cout << acc << endl;
}

void deposit(std::vector<Account> &account, double amount)
{
    cout << "Deposition Window" << endl;
    for (auto &acc: account)
        if(acc.deposit(amount))
            cout << "Deposition successful to " << acc << " of an amount of " << amount << endl;
        else 
        {
            cout << "Deposition terminated " << endl;
        }
                
}

void withdraw(std::vector<Account> &account, double amount)
{
    cout << "Withdrawl Window" << endl;
    for (auto &acc: account)
        if(acc.withdraw(amount))
            cout << "Withdrawal successful to " << acc << " of an amount of " << amount << endl;
        else 
        {
            cout << "Withdrawl terminated " << endl;
        }
}

void display(std::vector<Savings_Account> &account)
{
    cout << "Savings Account" << endl;
    for (const auto &acc: account)
        cout << acc << endl;
}

void deposit(std::vector<Savings_Account> &account, double amount)
{
       cout << "Deposition Window for Savings Account" << endl;
    for (auto &acc: account)
        if(acc.deposit(amount))
            cout << "Deposition successful to " << acc << " of an amount of " << amount << endl;
        else 
        {
            cout << "Deposition terminated " << endl;
        }
}

void withdraw(std::vector<Savings_Account> &account, double amount)
{
      cout << "Withdrawl Window for Savings Account" << endl;
    for (auto &acc: account)
        if(acc.withdraw(amount))
            cout << "Withdrawal successful to " << acc << " of an amount of " << amount << endl;
        else 
        {
            cout << "Withdrawl terminated " << endl;
        }
}

void display(std::vector<Checking_Account> &account)
{
    cout << "Checking Account" << endl;
    for (const auto &acc: account)
        cout << acc << endl;
}

void deposit(std::vector<Checking_Account> &account, double amount)
{
    cout << "Deposition Window for Checking Account" << endl;
    for (auto &acc: account)
        if(acc.deposit(amount))
            cout << "Deposition successful to " << acc << " of an amount of " << amount << endl;
        else 
        {
            cout << "Deposition terminated " << endl;
        }
                
}

void withdraw(std::vector<Checking_Account> &account, double amount)
{
      cout << "Withdrawl Window for Checking Account" << endl;
    for (auto &acc: account)
        if(acc.withdraw(amount))
            cout << "Withdrawal successful to " << acc << " of an amount of " << amount << endl;
        else 
        {
            cout << "Withdrawl terminated " << endl;
        }
}

void display(const std::vector<Trust_Account> &account)
{
    cout << "Account" << endl;
    for (const auto &acc: account)
        cout << acc << endl;
}

void deposit(std::vector<Trust_Account> &account, double amount)
{
    cout << "Deposition Window for Trust Account" << endl;
    for (auto &acc: account)
        if(acc.deposit(amount))
            cout << "Deposition successful to " << acc << " of an amount of " << amount << endl;
        else 
        {
            cout << "Deposition terminated " << endl;
        }
                
}

void withdraw(std::vector<Trust_Account> &account, double amount)
{
    cout << "Withdrawl Window for Trust Account" << endl;
    for (auto &acc: account)
        if(acc.withdraw(amount))
            cout << "Withdrawal successful to " << acc << " of an amount of " << amount << endl;
        else 
        {
            cout << "Withdrawl terminated " << endl;
        }
}


