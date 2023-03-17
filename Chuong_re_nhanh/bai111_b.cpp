#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int h = 0;
    int min = 0;
    int max = 0;
    cin >> h;
    //h = h - 1;
    int j;
    j = h;
    min = j;
    max = j;
   // cout << max << "\n";
    for (int i = 1; i < h * 2 ; i++)
    {
        if (i == j)
        {
            cout << "*" << "\t";
        }
        else
        {
            cout << " " << "\t";
        }
    }
    cout << "\n";
    for (int i = 1; i < h - 1; i++)
    {
        min = min - 1;
        max = max + 1;
        for (int row = 1; row < h * 2 - 1 ; row++)
        {
            if (row == min || row == max)
            {
                cout << "*" << "\t";
            }
            else
            {
                cout << " " << "\t";
            }
        }
        cout << "\n";
    }
    for (int last_row = 1; last_row < h * 2; last_row++)
    {
        cout << "*" << "\t";
    }
    

    return 0;
}