// this is c++ and is just to see if I (david) can personally recreate this in c++ since I am recently familiar with c++ over python.

#include <iostream>
#include <string>

using namespace std;

void menu() {
    cout << "------------------" <<
    "\nATM Screen\n" << "------------\n";
    cout << "New Customer must input their Balance in their account.\n: $";
    
}

int main() {
    short account_balance;

    menu();
    cin >> account_balance;
    /*
    if (cin.fail()) {
        cin.clear();
        cin.ignore(5);
        cout << "Enter a valid number from -$10,000 and $10,000\n";
        cin >> account_balance;
    }
    */
    cout << "This is your balance: $" << account_balance;
    
    return 0;
}
