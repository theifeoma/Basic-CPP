#include <iostream>

using namespace std;

struct savingAccount{
    string fn;
    string sn;
    string acc_number;
};

int main() {


    cout << "**********************\n";
    cout << "*** WELCOME TO WMB ***\n";
    cout << "**********************\n";

    cout << "1. Open an account" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Transfer" << endl;
    cout << "Please enter an option" << endl;

    int option;
    cin >> option;

    savingAccount object; //variable Scope
    float balance = 90.0;
    float total = 0.0;
    float deposit = 0.0;
    float withdraw = 0.0;

    switch(option)
    {

        case 1:
            cout << "Please enter your first name";
            cin >> object.fn;
            //cout << "Please enter your second name";
            //cin >> object.sn;
            //object.acc_number = auto_gen;
            //auto_gen++;
            break;
        case 2:
            cout << "How much would you like to deposit? " << endl;
            cin >> deposit;
            total = balance + deposit;
            cout << "You now have " << total << endl;
            break;
        case 3:
            cout << "How much would you like to withdraw?" << endl;
            cin >> withdraw;
            if (withdraw > balance)
            {
                cout << "You do not have enough money to withdraw " << withdraw << endl;
                cout << "You have " << balance << endl;
            }
            else{
                total = balance - withdraw;
                cout << "You have " << total << endl;
            }

            break;
        case 4:
            cout << "What account would you like to transfer to?" << endl;
            int transferAcct;
            cin >> transferAcct;
            cout << "How much would you like to transfer?" << endl;
            cin >> withdraw;
            if (withdraw > balance)
            {
                cout << "You do not have enough money to transfer" << withdraw << endl;
                cout << "You have " << balance << endl;
            }
            else{
                total = balance - withdraw;
                cout << "You have successfully transferred " << withdraw << endl;
            }
            break;
        default:
            cout << "Please enter a number between 1 - 4 only" << endl;
    }

    return 0;
}
