#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // size of the array
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    // Compute prefix sum
    int prefix[n];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    cout << "Prefix sum array: ";
    for (int i = 0; i < n; i++) cout << prefix[i] << " ";
    cout << endl;

    return 0;
}
