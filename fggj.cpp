#include <iostream>
#include <memory>
using namespace std;

int main() {
    int n = 5;
    unique_ptr<int[]> arr(new int[n]);

    for (int i = 0; i < n; ++i) {
        arr[i] = i * 10;
    }

    for (int i = 0; i < n; ++i) {
        arr[i] += 5;
    }

    cout << "Updated array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
