#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }

    int j;
    for (int i = 1; i < n; i++) {
        int k = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > k; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = k;
    }

    unsigned long long int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            sum += arr[j];
        }
    }

    cout << sum;
    return 0;
}