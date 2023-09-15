#include "Checking_Account.hpp"
#include <iostream>
using namespace std;

Checking_Account::Checking_Account(std::string name, double balance, double fee)
: Account{name, balance}, fee{fee}
{
    
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account)
{
    os << "Checking Account of : " << account.name << " with balance of " << account.balance << endl;
    return os;
}

bool Checking_Account::withdraw(double amount)
{
    amount -= fee;
    cout << "Checking_Account" << endl;
    return Account::withdraw(amount);
}

