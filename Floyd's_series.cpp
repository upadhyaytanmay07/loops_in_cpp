/* Tanmay Upadhyay
entc b2
PRN 24070123120 */

// Floyd's series

#include<iostream>
using namespace std;

int main()
{
    int i, j, num = 1;

    for (i = 1; i <= 4; i++) 
    {
        for (j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}

/* Output for this code

1 
2 3 
4 5 6 
7 8 9 10

*/
