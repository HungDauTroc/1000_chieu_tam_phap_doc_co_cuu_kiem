#include <iostream>

using namespace std;

int main()
{
    int S1[12] = {9,3,4,2,2,3,5,1,7,8,23,12};
    int length = sizeof S1 / sizeof (int);
    int S = S1[0];
    int k;
    for (int i = 0; i < length; i++)
    {
        if (S > S1[i])
        {
            S = S1[i];
            k = i;
        }
    }
        cout << "vi tri so be nhat la " << k << "\n";
    return 0;
}
