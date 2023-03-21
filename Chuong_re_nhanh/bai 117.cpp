#include <iostream>

using namespace std;

int Sum(int x, int n)
{   
    int S = 0;
    int T = 1;
    
    for (int i = 1; i <= n; i++)
    {
        T = T * x;
        S = S + T;
    }
    cout << S;
    return S;
}
int main()
{
    int a,x;
    cin >> x >> a ;
    Sum(x, a);
    return 0;
}
