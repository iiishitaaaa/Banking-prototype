#ifndef TRUST_ACCOUNT_HPP
#define TRUST_ACCOUNT_HPP
#include "Savings_Account.hpp"

class Trust_Account: public Savings_Account
{
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
    static constexpr char *default_name = "Specimen Trust Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_int_rate = 5.0;
protected:
    double int_rate;
public:
    Trust_Account(std::string name = default_name, double balance = default_balance, double int_rate = default_int_rate);
    bool deposit(double amount);
};

#endif // TRUST_ACCOUNT_HPP
