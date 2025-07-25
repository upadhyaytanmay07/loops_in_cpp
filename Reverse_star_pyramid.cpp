/* Tanmay Upadhyay
prn 24070123120
entc b2
*/

// reverse pyramid 
#include<iostream>
using namespace std;

int main()
{
    int rows = 5;

    for (int i = rows; i >= 1; i--)
    {
        for (int space = 0; space < rows - i; space++)
        {
            cout << " ";
        }

        for (int star = 0; star < (2 * i - 1); star++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

/* Output for this code

*********
 *******
  *****
   ***
    *

*/
