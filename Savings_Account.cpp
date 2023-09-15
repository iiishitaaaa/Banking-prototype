#include "Savings_Account.hpp"
#include <iostream>
using namespace std;

Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
: Account{name, balance}, int_rate{int_rate}
{
    
}

bool Savings_Account::deposit(double amount)
{
    amount += amount * (int_rate/100);
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account)
{
    os << "Savings Account of : " << account.name << " with balance of " << account.balance << " and an interest rate of " << account.int_rate << " %." << endl;
}



