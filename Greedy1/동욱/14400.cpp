#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long x_sum = 0 , y_sum = 0;


    long long x[n] = {0,};
    long long y[n] = {0,};

    long long sum = 0;

    for(int i=0; i<n; i++)
    {
        cin >> x[i] >> y[i];
        x_sum = x_sum + x[i];
        y_sum = y_sum + y[i];
    }

    sort(x,x+n);
    sort(y,y+n);

    long long x_avg, y_avg;

    x_avg = x[(n-1)/2];
    y_avg = y[(n-1)/2];
    //x_avg = x_sum / n;
    //y_avg = y_sum / n;


    for(int i=0; i<n; i++)
    {
        sum += abs(x[i] - x_avg) + abs(y[i] - y_avg);
    }

    cout << sum << endl;

    return 0;
}
