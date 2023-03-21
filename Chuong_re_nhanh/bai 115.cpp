#include <iostream>

using namespace std;

int ham_kq (char* name, float math, float lit)
{
    float result;
    result = (math + lit) / 2;
    cout << name << "\t" << result;
    return result;
}
int main()
{
    char a[10];
    float b,c;
    cin >> a >> b >> c;
    ham_kq(a, b, c);
    return 0;
}
