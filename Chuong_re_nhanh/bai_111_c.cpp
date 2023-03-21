

#include <iostream>

using namespace std;

int main()
{
    int h;
    cout << "nhap h:" << "\t";
    cin >> h;
    h = h + 1;
    int max = h;
    for (int k = 1; k < max; k++)
    {
        h = h - (h - k);
    int j = 1;
    for (int i = 2; i <= h + 1; i++)
    {
        j = j + 1;
        if (i == j)
        {
           cout << "*" << "\t";
        }
    }
    cout << "\n";
    }
    return 0;
}
