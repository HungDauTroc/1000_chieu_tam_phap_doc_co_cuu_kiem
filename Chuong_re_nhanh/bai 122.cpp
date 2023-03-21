#include <iostream>

using namespace std;

int main()
{
    float S1[12] = {1.4,3.6,4,2,1,3,5,6,7,8,23.2,12.4};
    int length = sizeof S1 / sizeof (int);
    float S;
    S = S1[0];
    for (int i = 0; i < length; i++)
    {
        if (S < S1[i])
        {
            S = S1[i];
        }
    }
        cout << "so lon nhat la " << S << "\n";
    return 0;
}
