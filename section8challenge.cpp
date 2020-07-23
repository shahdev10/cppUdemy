#include <iostream>
using namespace std;

int main() {
    int cents = 0;
    cout << "Enter the amount in cents: ";
    cin >> cents;
    cout << endl;

    int dollar = cents / 100;
    cents = cents - (dollar * 100);

    int quarter = cents / 25;
    cents = cents - (quarter * 25);

    int dime = cents / 10;
    cents = cents - (dime * 10);

    int nickel = cents / 5;
    cents = cents - (nickel * 5);

    int penny = cents / 1;
    cents = cents - (penny * 1);

    cout << "Dollars: " << dollar << endl;
    cout << "Quarters: " << quarter << endl;
    cout << "Dimes: " << dime << endl;
    cout << "Nickels: " << nickel << endl;
    cout << "Pennies: " << penny << endl;


}
