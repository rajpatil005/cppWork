#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // input array elements
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Example: Sum of array
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
