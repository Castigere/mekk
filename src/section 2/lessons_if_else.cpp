#include <iostream>
using namespace std;

int main() {
    cout << "1. \tAdd new record" << endl;
    cout << "2. \tDelete new record" << endl;
    cout << "3. \tView new record" << endl;
    cout << "4. \tSearch record" << endl;
    cout << "5. \tQuit" << endl;
    cout << "Enter your selection: " << flush;
    
    int selection;
    cin >> selection;

    if(selection < 3) {
        cout << "Insuficient privileges to use there menu options" << endl;
    } 
    else {
        cout << "Privilege level sufficient." << endl;
    }

    if(selection == 5) {
        cout << "Quitting!" << endl;
    } 
    else {
        cout << "Not quitting." << endl;
    }
    return 0;
}