// Memory usage: 2632KB, Time required: 48ms
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    scanf("%d", &n);
    int loc_x[n], loc_y[n];
    for(int i=0; i<n; ++i)
        scanf("%d%d", &loc_x[i], &loc_y[i]);
    
    
    int middle_x = loc_x[n/2], middle_y = loc_y[n/2];
    
    long long sum = 0;
    for(int i=0; i<n; ++i){
        sum += abs(middle_x - loc_x[i]);
        sum += abs(middle_y - loc_y[i]);
    }
    
    cout<<sum<<endl;
    
    return 0;
}
