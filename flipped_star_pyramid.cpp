/* Tanmay Upadhyay
PRN 24070123120
ENTC b2 */

// flipped star pyramid
#include<iostream>
using namespace std;
int main()
{
    int i, j, k;
    int n=5;

    for(i=1;i<=n; i++)
    {
    for(k=5; k>=i; k--)
    {
        cout<<" ";
    }

        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

/* Output for this code

     *
    **
   ***
  ****
 *****

*/
