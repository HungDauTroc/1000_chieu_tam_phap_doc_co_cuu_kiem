
#include <iostream>
#include <math.h>

using namespace std;

bool checkscp (int n)
{
    int k;
    bool flag = false;
    if (n <= 2)
    {
        flag = true;
    }
    else if (n > 2)
    {
        while (k*k <= n)
        {
            if (k*k == n)
            {
                flag = true;
                break;
            }
            k++;
        }
    }
    return flag;
}

void Scp (int n)
{   
    for (int i = 2; i < n; i++)
    {
        if (checkscp(i) == true)
        {
            cout << i << "\t";
        }
    }
}
int main()
{
    int a;
    cin >> a ;
    checkscp (a);
    Scp (a);
    return 0;
}
