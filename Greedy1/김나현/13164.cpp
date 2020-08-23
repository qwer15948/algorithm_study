#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    long long n, k;

    cin >> n >> k;

    long long* arr = new long long[n];
    long long* arr2 = new long long[n-1];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n-1; i++)
        arr2[i]=arr[i+1]-arr[i];//차이값 저장

    sort(arr2, arr2+n-1);

    long long sum = 0;

    for (int i = 0; i < n-k; i++)
        sum += arr2[i];

    cout << sum << endl;

    return 0;
}