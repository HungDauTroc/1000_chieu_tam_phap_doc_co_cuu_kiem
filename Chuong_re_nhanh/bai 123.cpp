#include <iostream>

using namespace std;

void minn(float S1[12])
{
    float S = S1[0];
    float k;
    for (int i = 0; i < 12; i++)
    {
        if (S > S1[i])
        {
            S = S1[i];
            cout << S << "\n";
            k = i;
        }
    }
        cout << "vi tri so be nhat la " << k << "\n";
}
int main()
{
    float S1[12] = {9,3,4,2,2,3,5,1,7,8,23,12};
    int length = sizeof S1 / sizeof (int);
    minn (S1);

    return 0;
}
