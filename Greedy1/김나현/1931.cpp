#include <iostream>
#include <algorithm>
using namespace std;

long long** arr;

void quickSort( long long int i, long long int j)
{
    if (i >= j) return;
    long long int pivot = arr[(i + j) / 2][1];
    long long int left = i;
    long long int right = j;

    while (left <= right)
    {
        while (arr[left][1] < pivot) left++;
        while (arr[right][1] > pivot) right--;
        if (left <= right) {
            if (left < right && !(arr[left][1] == arr[right][1] && arr[left][0] < arr[right][0])) {
                swap(arr[left], arr[right]);
            }
            left++; right--;
        }

    }
    quickSort(i, right);
    quickSort(left, j);
}



int main() {

    long long n;
    cin >> n;


    arr = new long long* [n];
    for (int i = 0; i < n; i++)
        arr[i] = new long long[2];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++)
            cin >> arr[i][j];
    }
    //정렬 시작=0 끝=n

    quickSort(0, n - 1);

    long long count = 1;
    int j;
    for (int i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i][1] <= arr[j][0]) {
                count++;
                break;
            }
        }
        i = j - 1;
    }
    cout << count;
    return 0;
}