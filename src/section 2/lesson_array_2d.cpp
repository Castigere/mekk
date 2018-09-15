#include <iostream>
using namespace std;
// M x N matrix
// #define M 10
// #define N 10

// Dynamically Allocate Memory for 2D Array in C++
int main() {
	const int M = 100;
	const int N = 100;
    // dynamically create array of pointers of size M
    int** A = new int*[M];

    // dynamically allocate memory of size N for each row
    for (int i = 0; i < M; i++)
        A[i] = new int[N];

    // assign values to allocated memory
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            A[i][j] = (i + 1) * (j + 1);

    // print the 2D array
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            std::cout << A[i][j] << " ";

        std::cout << std::endl;
    }

    // deallocate memory using delete[] operator
    for (int i = 0; i < M; i++)
        delete[] A[i];

    delete[] A;

    return 0;
}