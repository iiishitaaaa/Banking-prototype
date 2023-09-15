#include "Trust_Account.hpp"
#include <iostream>
using namespace std;

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
: Savings_Account{name, balance}, int_rate{int_rate}
{
    
}

bool Trust_Account::deposit(double amount)
{
    amount += amount * (int_rate/100);
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account)
{
    os << "Trust Account of : " << account.name << " with balance of " << account.balance << " and an interest rate of " << account.int_rate << " %." << endl;
}

