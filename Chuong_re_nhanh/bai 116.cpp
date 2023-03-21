#include <iostream>

using namespace std;

int Sum(int n)
{
    int S = 0;
    for (int i = 1; i <= n; i++)
    {
        S = S + i;
    }
    cout << S;
    return S;
}
int main()
{
    int a;
    cin >> a ;
    Sum(a);
    return 0;
}
