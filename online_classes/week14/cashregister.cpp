#include <iostream>
#include <stdlib.h>

using namespace std;

class CashRegister
{
public:
    void clear();
    void add_item(double price);
    double get_total() const;
    int get_count() const;
private:
    int item_count;
    double total_price;
};

void CashRegister::clear()
{
    item_count = 0;
    total_price = 0.0;
}

void CashRegister::add_item(double price)
{
    item_count++;
    total_price += price;
}

double CashRegister::get_total() const
{
    return total_price;
}

int CashRegister::get_count() const
{
    return item_count;
}


int main(int argc, char const *argv[])
{
    CashRegister register1;
    CashRegister register2;

    register1.clear();
    register2.clear();
    register1.add_item(1.95);

    cout << register1.get_total() << endl;
    cout << register2.get_total() << endl;

    return EXIT_SUCCESS;
}