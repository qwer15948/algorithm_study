#include <iostream>

using namespace std;

int main()
{
    int n, k;
    int cnt = 0;

    cin >> n >> k;
    int value[n] = {0,};

    for(int i = 0; i<n; i++){
        cin >> value[i];
    }

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(value[i] < value[j]){
                int temp;
                temp = value[i];
                value[i] = value[j];
                value[j] = temp;
            }
        }
    }

    for(int i = 0; i<n; i++){
        if(k/value[i] != 0){
            cnt = cnt + k/value[i];
            k = (k - value[i]*(k/value[i]));
        }
    }
    cout << cnt << endl;
    return 0;
}
