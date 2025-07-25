/* Tanmay Upadhyay
PRN 24070123120
ENTC b2
*/


#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string new_password, Password;
    int attempts = 0;
    int maxAttempts = 3; 

    cout << "Set your password: \n";
    getline(cin, new_password);

    while (attempts < maxAttempts) 
    {
        cout << "Enter your password again: \n";
        getline(cin, Password);

        if (Password == new_password) 
        {
            cout << "\nPassword is correct." << endl;
            return 0;
        } else {
            attempts++;
            if (attempts < maxAttempts) 
            {
                cout << "\nIncorrect password. Attempts left: " 
                     << (maxAttempts - attempts) << endl;
            } else {
                cout << "\nSystem locked due to too many failed attempts." << endl;
            }
        }
    }

    return 0;
}

/* Output for this code

Set your password: 
password123
Enter your password again: 
password1111

Incorrect password. Attempts left: 2
Enter your password again:
password11

Incorrect password. Attempts left: 1
Enter your password again:
password123

Password is correct.

*/
