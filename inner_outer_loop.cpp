/* Tanmay Upadhyay
PRN 24070123120
ENTC B2 */

#include<iostream>
using namespace std;
int main()
{
    for ( int i =1; i<=2; i++)
    {
        cout<<"Outer : "<<i<<endl;
        for(int j=1; j<=3; j++)
        {
            cout<<"Inner : "<<j<<endl;
        }
    }
}

/* Output for this code

Outer : 1
Inner : 1
Inner : 2
Inner : 3
Outer : 2
Inner : 1
Inner : 2
Inner : 3

*/
