#include <iostream>

using namespace std;

void arrange (float S1[12])
{
    int temp;
    for (int i = 0; i < 11; i++)
    {
        for (int j = i + 1; j < 12; j++)
        {
            if (S1[j] < S1[i])
            {
                temp = S1[i];
                S1[i] = S1[j];
                S1[j] = temp;
            }
        }
        cout << "array arrangement (small to big) "<< S1[i] << "\n";
    }
}
int main()
{
    float S1[12] = {9.2,3.6,4,101.23,2010,3.45,-5.2,2002,7,8.43,-23,12.1};
    arrange (S1);

    return 0;
}
