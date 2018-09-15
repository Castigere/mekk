#include <iostream>
using namespace std;

int main() {

    char text1[] = {'h', 'e', 'l', 'l', 'o', 0};  // 0 is a null terminator

    cout << sizeof(text1) << endl;

    char text[] = "hello";

    cout << text << endl;

    for (int i = 0; i< sizeof(text);i++) {
        cout << i << " " << text[i] << endl;
    }

    int k = 0;

    while(true){
        if(text[k] == 0) {
            break;
        }
        cout << text[k] << flush;
        k++;
    }

    return 0;
}