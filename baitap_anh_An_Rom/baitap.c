/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a = 5000;
    int b = 2000;
    int c = 1000;
    int i = 0;
    int j = 0;
    int n = 0;
    int tien;
    cin >> tien;
    while (tien != 0)
    {
        if (tien >= a)
        {
            tien = tien - a;
            i++;
        }
        else if (tien >= b && tien < a)
        {
            tien = tien - b;
            j++;
        }
        else if (tien >= c && tien < b && tien < a)
        {
            tien = tien - c;
            n++;
        }
    }
    
    cout << "tong so to 5000 la: " << i << "\n";
    cout << "tong so to 2000 la: " << j << "\n";
    cout << "tong so to 1000 la: " << n << "\n";
    
    return 0;
}
