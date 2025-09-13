#include <iostream>
using namespace std;

// g++ DSA-Lab1/testtask7.cpp src/task7.cpp -o testtask7
// ./testtask7
void findIndices(int arr[], int n, int key);

int main() {
    // Test 1: Multiple occurrences
    int arr1[] = {1, 2, 3, 2, 4};
    cout << "Test 1 (multiple occurrences, key=2): ";
    findIndices(arr1, 5, 2);  // expected output: 1 3

    // Test 2: Key not present
    int arr2[] = {5, 6, 7};
    cout << "Test 2 (key not present, key=10): ";
    findIndices(arr2, 3, 10); // expected output: Key not found

    // Test 3: Empty array
    int arr3[1]; // empty array
    cout << "Test 3 (empty array, key=1): ";
    findIndices(arr3, 0, 1);  // expected output: Array is empty or Key not found

    return 0;
}
