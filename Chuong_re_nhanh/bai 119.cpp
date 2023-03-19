
#include <iostream>
#include <math.h>

using namespace std;

bool checksnt (int n)
{
    if (n < 2)
    {
        return false;
    }
    else if (n > 2)
    {
        if (n % 2 == 0)
        {
            return false;
        }
        for (int i = 3; i <= sqrt(n); i = i + 2)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void Snt (int n)
{   
    for (int i = 2; i < n; i++)
    {
        if (checksnt(i) == true)
        {
            cout << i << "\t";
        }
    }
}
int main()
{
    int a;
    cin >> a ;
    Snt (a);
    return 0;
}
