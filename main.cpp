#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

int main()
{
    try
    {
        std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe", -10);
        std::cout << *a1 << std::endl;
    }

    catch (const IllegalBalanceException &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::unique_ptr<Account> a2 = std::make_unique<Savings_Account>("Larry", 1000, 5.0);

    try
    {
        a2->withdraw(2000);
    }
    catch (const InsufficientFundsException &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "Program Terminated" << std::endl;
    return 0;
}