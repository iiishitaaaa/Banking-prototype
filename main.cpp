#include <iostream>
#include <vector>
#include "Savings_Account.hpp"
#include "Checking_Account.hpp"
#include "Utility.hpp"


using namespace std;

int main() 
{
    cout.precision(2);
    cout << fixed;
    
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Ishita Gupta", 50000});
    accounts.push_back(Account{"Sayam Samal", 40000});
    accounts.push_back(Account{"Priyal Vaidya"});
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 4000);
    
    vector<Savings_Account> savings_account;
    savings_account.push_back(Savings_Account{});
    savings_account.push_back(Savings_Account{"Ishita Gupta", 50000});
    savings_account.push_back(Savings_Account{"Sayam Samal", 40000});
    savings_account.push_back(Savings_Account{"Priyal Vaidya"});
    
    display(savings_account);
    deposit(savings_account, 2000);
    withdraw(savings_account, 4000);
    
    vector<Checking_Account> checking_account;
    checking_account.push_back(Checking_Account{});
    checking_account.push_back(Checking_Account{"Ishita Gupta", 50000});
    checking_account.push_back(Checking_Account{"Sayam Samal", 40000});
    checking_account.push_back(Checking_Account{"Priyal Vaidya"});
    
    display(checking_account);
    deposit(checking_account, 1000);
    withdraw(checking_account, 60);
    
    vector<Trust_Account> trust_account;
    trust_account.push_back(Trust_Account{});
    trust_account.push_back(Trust_Account{"Ishita Gupta", 50000});
    trust_account.push_back(Trust_Account{"Sayam Samal", 40000});
    trust_account.push_back(Trust_Account{"Priyal Vaidya"});
    
    display(trust_account);
    deposit(trust_account, 1000);
    withdraw(trust_account, 60);
}

