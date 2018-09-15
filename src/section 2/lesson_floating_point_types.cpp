#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float fValue = 76.554;
    double dValue = 76.554;
    long double lValue = 234.230498423948;
    cout << sizeof(lValue) << endl;
    cout << setprecision(30) << fixed << fValue << endl;
    cout << setprecision(30) << fixed << dValue << endl;
    cout << setprecision(30) << fixed << lValue << endl;
    return 0;
}