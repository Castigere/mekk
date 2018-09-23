#include <iostream>
using namespace std;

int main() {
    int color = 0x123456;

    int red = color & 0xFF0000;

    cout << hex << (int)red << endl;

    unsigned char redShift = red >> 16; // shift right 

    cout << hex << (int)redShift << endl;

    unsigned char green = (color & 0x00FF00) >> 8;

    cout << hex << (int)green << endl;

    unsigned char blue = (color & 0x0000FF);

    cout << hex << (int)blue << endl;

    // color:  100010111111011111110111
    // mask:   111111110000000000000000
    // result: 100010110000000000000000

    // or do the following:

    unsigned char redAgain = color >> 16;

    cout << hex << (int)redAgain << endl;

    // bitwise or: |

    return 0;
}