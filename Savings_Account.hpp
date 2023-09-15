#ifndef SAVINGS_ACCOUNT_HPP
#define SAVINGS_ACCOUNT_HPP
#include "Account.hpp"

class Savings_Account: public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);
private:
    static constexpr char *default_name = "Specimen Savings Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_int_rate = 5.0;
protected:
    double int_rate;
public:
    Savings_Account(std::string name = default_name, double balance = default_balance, double int_rate = default_int_rate);
    bool deposit(double amount);
};

#endif // SAVINGS_ACCOUNT_HPP
