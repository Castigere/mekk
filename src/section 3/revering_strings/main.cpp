#include <iostream>
using namespace std;

int main() {
    char text[] = "Morra di er mann og stygg!";
    int length = sizeof(text) / sizeof(char) - 2;
    char reversedText[length] = {};

    for (int i = 0; i <= length; i++) {
        cout << text[length - i] << endl;
        reversedText[i] = text[length - i];
        if (i == length) reversedText[i + 1] = 0;  // add null termniator in the char array
    }

    cout << reversedText << endl;

    char str[] = "hello";

    int nChars = sizeof(str) -1; // 5

    char *pStart = str; // index 0 or 'h'

    char *pEnd = str + nChars -1; // 0 + 5 - 1 = 4

    cout << *pEnd << endl; // index 4 or 'o'

    while(pStart < pEnd) { // supposedly common syntax for swapping values
        char save = *pStart;
        *pStart = *pEnd;
        *pEnd = save;
        pStart++;
        pEnd--;
    }

    cout << str;

    return 0;
}