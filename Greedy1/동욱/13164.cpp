#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    int sum = 0;

    cin >> n >> k;

    int *child = new int[n];
    int *cost = new int[n-1];

    for(int i=0; i<n; i++){
        cin >> child[i];
    }

    for(int i=0; i<n-1; i++){
        cost[i] = child[i+1] - child[i];
    }

    sort(cost, cost+n-1);

    for(int i=0; i<n-k; i++){
        sum = sum + cost[i];
    }

    cout << sum << endl;

    delete[] cost;
    delete[] child;

    return 0;
}
