#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int  t ;
    cin >> t ;
    for (int i = t ; i>=1 ;i--)
    {
        for (int j = 1 ; j<=i ;j++)
        {
            cout << "*" ;
        }
        cout << "" << endl ;
    }
    return 0;
}
