#include <iostream>

using namespace std;

void count(int S1[12])
{
    int S = 100;
    int Sc;
    for (int i = 0; i < 12; i++)
    {
        if ((S1[i] < S))
        {
            Sc ++;
        }
    }
    cout << "number of values smaller than 100: " Sc << "\n";
}
int main()
{
    int S1[12] = {9,3,4,101,2010,3,5,2002,7,8,23,12};
    count (S1);

    return 0;
}
