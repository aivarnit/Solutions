#include <iostream>
using namespace std;

int main()
{
    int totalCents, dollars, quarters, dimes, nickels, pennies;
    dollars = quarters = dimes = nickels = pennies = 0;

    cout << "Enter an amount in cents : ";
    cin >> totalCents;

    dollars = totalCents/100;
    totalCents%=100;

    quarters = totalCents/25;
    totalCents%=25;

    dimes = totalCents/10;
    totalCents%=10;

    nickels = totalCents/5;
    totalCents%=5;

    pennies = totalCents;


    cout << "You can provide change for this change as follows: \n";
    cout << "dollars  : " << dollars << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes    : " << dimes << endl;
    cout << "nickels  : " << nickels << endl;
    cout << "pennies  : " << pennies << endl;

    return 0;
}