#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int value = 777;
    cout << value << endl;
    cout << "Max int value: " << INT_MAX << endl;
    cout << "Min int value: " << INT_MIN << endl;
    long int huge = 922337203685477587;
    cout << huge << endl;
    cout << "Size of int: " << sizeof(long long) << endl;
    return 0;
}