#ifndef UTILITY_HPP
#define UTILITY_HPP
#include "Account.hpp"
#include "Savings_Account.hpp"
#include "Checking_Account.hpp"
#include "Trust_Account.hpp"
#include <vector>

void display(const std::vector<Account> &account);
void deposit(std::vector<Account> &account, double amount);
void withdraw(std::vector<Account> &account, double amount);


void display(std::vector<Savings_Account> &account);
void deposit(std::vector<Savings_Account> &account, double amount);
void withdraw(std::vector<Savings_Account> &account, double amount);

void display(std::vector<Checking_Account> &account);
void deposit(std::vector<Checking_Account> &account, double amount);
void withdraw(std::vector<Checking_Account> &account, double amount);

void display(const std::vector<Trust_Account> &account);
void deposit(std::vector<Trust_Account> &account, double amount);
void withdraw(std::vector<Trust_Account> &account, double amount);

#endif // UTILITY_HPP
