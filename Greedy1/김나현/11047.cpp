#include <iostream>
using namespace std;
int main() {

    int n, k;
    cin >> n >> k;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int count = 0;
    for (int i = 0; i < n; i++) {
        count += k / arr[n - i - 1];
        k = k % arr[n - i - 1];
    }
    cout << count;

    return 0;
}