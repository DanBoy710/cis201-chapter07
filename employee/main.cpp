#include <iostream>
#include <string>
#include <vector>
#include "employee.h"


int main()
{
    Employee emp1("Fred Flintstone",50000.0);
    Employee emp2("Wilma Flintstone",55000.0);
    BankAccount *account = new BankAccount(100000);
    emp1.set_account(account);
    emp2.set_account(account);
    emp1.get_account().print_balance();
    emp2.get_account().print_balance();

    return 0;
}
