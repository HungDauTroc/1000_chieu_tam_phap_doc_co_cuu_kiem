
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int j = 4;
    int k = 1;
    int n = 2;
    for (int m = 1; m < 8; m++)
    {
        if (j == m)
        {
            cout << "*" << "\t";
        }
        else 
        {
            cout << " " << "\t";
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "\n";
        j = j - k;
        k = k + 2;
        for (int dem1 = 1; dem1 <= j ; dem1++)
        {
            if (dem1 == j)
            {
                cout << "*" << "\t";
            }
            else 
            {
                cout << " " << "\t";
            }
        }
        for (int m = 0; m < n; m ++)
        {
            j++;
            for (int dem2 = 1; dem2 <= j ; dem2++)
            {
                if (dem2 == j)
                {
                    cout << "*" << "\t";
                }
            }
        }  
        n = n + 2;
    }

    return 0;
}
