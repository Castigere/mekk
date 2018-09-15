#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float value1 = 1.1;
    if (value1 < 1.11 && value1 > 1.1  ) {
       cout << "equals" << endl; 
    } else {
        cout << setprecision(20) << "not equal" << value1 << endl;
    }
    return 0;
}