#ifndef CHECKING_ACCOUNT_HPP
#define CHECKING_ACCOUNT_HPP
#include "Account.hpp"

class Checking_Account: public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    static constexpr char *default_name = "Specimen Checking Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_fee = 1.50;
protected:
    double fee;
public:
    Checking_Account(std::string name = default_name, double balance = default_balance, double fee = default_fee);
    bool withdraw(double amount);
};

#endif // CHECKING_ACCOUNT_HPP
