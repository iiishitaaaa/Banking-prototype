#include "Account.hpp"
#include <iostream>
using namespace std;

std::ostream &operator<<(std::ostream &os, const Account &account)
{
    os << "Account of : " << account.name << " and balance : " << account.balance;
    return os;
}

Account::Account(std::string name, double balance)
 :name{name}, balance{balance}
{

}

bool Account::deposit(double amount) {
    if (amount > 0 )
    {
        balance += amount;
        return true;
    }
    else 
    {
        return  false;
    }
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) 
    {
        balance -= amount;
        return true;
    }
    else 
    {
        return false;
    }
}


