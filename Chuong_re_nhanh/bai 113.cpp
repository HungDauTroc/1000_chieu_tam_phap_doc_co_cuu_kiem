
#include <iostream>
#define eps 1e-4

using namespace std;

int main()
{
    int n;
    int x;
    int j;
    int T;
    int M;
    
    cin >> x >> n;
    int k = -1;
    for (int i = 1; i < n; i++)
    {
        j = 1;
        T = 1;
        M = 1;
        while (j <= 2*i + 1)
        {
            T = T * x;
            M = M * j;
            j++;
        }
        k = k * (-1);
        S = (k * T) / M;
    }
    cout << S;
    
    return 0;
}
