#include <iostream>
using namespace std;

void show1(string texts[], const int length) {
    for (int i = 0; i < length; i++) {
        cout << texts[i] << endl;
    };
};

void show2(string *texts, const int length) {  // No point in specifying length of array as only pointer is passed to the function
    for (int i = 0; i < length; i++) {
        cout << texts[i] << endl;
    };
};

void show3(string (&texts)[3]) {  //Pass reference to each string in the array
    for (int i = 0; i < sizeof(texts) / sizeof(texts[0]); i++) {
        cout << texts[i] << endl;
    };
};

string *getArray() {
    string texts[] = {"one", "two", "three"};  // Dont return pointers to local variables
    return texts;
}

char *getMemory() {
    char *pMem = new char[100];
    return pMem;
}

void freeNemory(char *pMem) { // Common pattern for freeing up allocated memory
    cout << "Freeing up memory" << endl;
    delete[] pMem;
}

int main() {
    string texts[] = {"apple", "orange", "bana!na"};
    cout << sizeof(texts) << endl;
    cout << sizeof(texts[0]) << endl;
    cout << sizeof(texts) / sizeof(texts[0]) << endl;
    int length = sizeof(texts) / sizeof(texts[0]);
    show1(texts, length);  // length of array will only whow actual bytes used in the same scope where it is declaresd. Otherwisae it will show the same size as a pointer
    show2(texts, length);
    show3(texts);

    char *pMemory = getMemory();
    freeNemory(pMemory);
    return 0;
}