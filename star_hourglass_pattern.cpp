/* Tanmay Upadhyay
PRN 24070123120 
entc b2 */

//hourglass pyramid
#include<iostream>
using namespace std;

int main()
{
    int rows = 5;
    int n=5;
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
    for(int i=2; i<=n; i++)
    {
        for(int k=5; k>=i+1; k--)
        {
            cout<<" ";
        }
        for(int j=2;j<=2*i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

/* Output for this code

*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********

*/
