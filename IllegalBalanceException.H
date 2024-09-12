#ifndef _ILLEGAL_BALANCE_EXCEPTION_H
#define _ILLEGAL_BALANCE_EXCEPTION_H

class IllegalBalanceException : std::exception
{
public:
    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() = default;
    virtual const char *what() const noexcept
    {
        return "Error - Negative balance";
    }
};

#endif // _ILLEGAL_BALANCE_EXCEPTION_H