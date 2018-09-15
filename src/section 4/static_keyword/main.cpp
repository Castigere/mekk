#include <iostream>
using namespace std;

// .h header file
class Test {
   public:
    static int const MAX = 99;  //can initialize const at declaration
   private:
    static int count;

   public:
    int id;
    Test() {
        id = count++; // ++ first increments then asigns value, ++ after asigns value then increments
        cout << "Test class constructed, ID is: " << id << endl;
    }
    static void showInfo() {
        cout << count << endl;
    }
};

// .cpp source
int Test::count = 0;

int main() {
    Test::showInfo();
    cout << Test::MAX << endl;
    Test test;
    Test test2;
    Test test3;
    Test test4;
    Test test5;
    return 0;
}