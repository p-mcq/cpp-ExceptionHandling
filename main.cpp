#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "IllegalBalanceException.H"

int main()
{
    try
    {
        std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe", -10);
        std::cout << *a1 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch (const IllegalBalanceException &e)
    {
        std::cerr << "Error Creating Account - Negative Balance" << '\n';
    }
    catch (...)
    {
        std::cerr << "Unknown Error" << '\n';
    }

    std::cout << "Program Terminated" << std::endl;
    return 0;
}