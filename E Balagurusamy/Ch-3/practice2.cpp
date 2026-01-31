/*
Write a program that creates a vector of user-giver size M using new operator.
*/

#include <iostream>
using namespace std;

int main() {
    int M;

    cout << "Enter size of vector: ";
    cin >> M;

    int* vec = new int[M];

    cout << "Enter " << M << " elements:\n";
    for (int i = 0; i < M; i++) {
        cin >> vec[i];
    }

    cout << "Vector elements are:\n";
    for (int i = 0; i < M; i++) {
        cout << vec[i] << " ";
    }

    delete[] vec;

    return 0;
}
