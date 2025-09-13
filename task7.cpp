#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter size of array: ";
    cin >> n;

    if (n == 0) {
        // empty array case
        cout << "Array is empty!" << endl;
        return 0;
    }

    int arr[100]; 
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter key to find: ";
    cin >> key;

    bool found = false;
    cout << "Indices where element found: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        // key not present case
        cout << "Key not found";
    }

    cout << endl;
    return 0;
}
