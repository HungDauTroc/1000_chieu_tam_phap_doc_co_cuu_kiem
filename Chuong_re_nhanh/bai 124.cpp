
#include <iostream>

using namespace std;

void minn(int S1[12])
{
    int S = 2004;
    float k;
    int Sc;
    for (int i = 0; i < 12; i++)
    {
        if ((S1[i] < S) && (S1[i] % 2 == 0))
        {
            Sc = S1[i];
            cout << Sc << "\n";
        }
        else
        {
            cout << "ko thay gi het tron" ;
        }
    }
}
int main()
{
    int S1[12] = {9,3,4,2,2010,3,5,2002,7,8,23,12};
    minn (S1);

    return 0;
}
