#include <iostream>
#include <string>

using namespace std;

void menu() {
    cout << "------------------" <<
    "\nATM Screen\n" << "------------\n";
    cout << "New Customer must input their Balance in their account.\n: $";
    
}
int main() {
    int short accountbalance;
    menu();

    cin>>accountbalance;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(5);
        cout << "Enter a valid number from -$10,000 and $10,000\n";
        cin >> accountbalance;
    }
    cout<<"results are "<<accountbalance;

    return 0;
}