#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int so;
    cin >> so;
    if (so < 100 && so > 1000)
    {
        cin >> so;
    }

    std::string k;
    std::string l;
    std::string m;
    std::string S1[9] = { "mot","hai","ba","bon","nam","sau","bay","tam","chin" };

    int hangchuc = 0;
    int hangdonvi = 0;
    int hangtram = 0;
    hangchuc = (so / 10) % 10;
    hangdonvi = so % 10;
    hangtram = so / 100;
   // cout << hangtram << "\t" << hangchuc << "\t" << hangdonvi;
    if (so % 100 == 0)
    {
        for (int i = 0; i < hangtram; i++)
        {
            m = S1[i];
        }
        cout << m << "\t" << "tram";
        return 0;
    }
    //101-110 "hang tram" linh "don vi"
    if (hangchuc == 0)
    {
        for (int i = 0; i < hangtram; i++)
        {
            m = S1[i];
        }
        for (int i = 0; i < hangdonvi; i++)
        {
            l = S1[i];
        }
        cout << m << "\t" << "tram" << "\t" << "linh" << "\t" << l;
        return 0;
    }
    // 111-119 "hang tram" muoi "donvi"
    if (hangchuc == 1)
    {
        for (int i = 0; i < hangtram; i++)
        {
            m = S1[i];
        }
        for (int i = 0; i < hangdonvi; i++)
        {
            l = S1[i];
        }
        cout << m << "\t" << "tram" << "\t" << "muoi" << "\t" << l;
        return 0;
    }
    // 120 - 999 "hangtram" tram "hang chuc" muoi " hang don vi" 
    if (hangchuc > 1)
    {
        for (int i = 0; i < hangtram; i++)
        {
            m = S1[i];
        }
        for (int i = 0; i < hangchuc; i++)
        {
            k = S1[i];
        }
        for (int i = 0; i < hangdonvi; i++)
        {
            l = S1[i];
        }
        cout << m << "\t" << "tram" << "\t" << k << "\t" << "muoi" << "\t" << l;
    }

	return 0;
}