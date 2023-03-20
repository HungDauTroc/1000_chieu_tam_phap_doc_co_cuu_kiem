#include <iostream>
#include <string.h>

using namespace std;

void divnum(int n)
{
    int S;
    int T = 0;
    int m = 0;
    int root = 1;
    S = n;
    int final = n;
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        m = S % 10;
        root = m * m * m;
        T = T + root;
        S = S / 10;
    }
    if (T == final)
    {
        cout << final << " la so amstrong";
    }
}
void amstrong(int n)
{
    for (int i = 10; i < n; i++)
    {
        divnum(i);
        cout << "\n";
    }
}

int main()
{
    int n = 1000;
    amstrong(n);
    return 0;
}