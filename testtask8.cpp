#include <iostream>
#include <string>
using namespace std;

// g++ DSA-Lab1/testtask8.cpp src/task8.cpp -o testtask8
// ./testtask8
int findSubstring(const string &text, const string &pattern);

int main() {
    // Test 1: Pattern at beginning
    cout << "Test 1 (pattern at beginning): " 
         << findSubstring("hello world", "hello") << endl; // expected: 0

    // Test 2: Pattern at end
    cout << "Test 2 (pattern at end): " 
         << findSubstring("hello world", "world") << endl; // expected: 6

    // Test 3: Pattern not present
    cout << "Test 3 (pattern not present): " 
         << findSubstring("hello world", "abc") << endl;   // expected: -1

    // Test 4: Empty pattern
    cout << "Test 4 (empty pattern): " 
         << findSubstring("hello world", "") << endl;      // expected: 0

    return 0;
}
