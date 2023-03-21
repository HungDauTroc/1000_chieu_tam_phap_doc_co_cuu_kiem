#include <iostream>
#include <string.h>

using namespace std;
int square(int n, int m)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result = result * m;
    }
    return result;
}

bool divnum(int n)
{
    int S;
    int T = 0;
    int m = 0;
    int root = 1;
    S = n;
    int final = n;
    int count = 0;
    int flag = false;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        m = S % 10;
        root = square(count, m);
        T = T + root;
        S = S / 10;
    }
    if (T == final)
    {
        flag = true;
    }
    return flag;
}
void amstrong(int n)
{
    for (int i = 10; i < n; i++)
    {
        if (divnum(i) == true)
        {
            cout << i << " la so amstrong" << "\t";
        }
    }
}

int main()
{
    int n = 1000000;
    amstrong(n);
    return 0;
}