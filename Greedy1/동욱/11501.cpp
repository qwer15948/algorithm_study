#include <iostream>

using namespace std;

int main()
{
    int T,N;

    cin >> T;

    for(int j = 0; j<T; j++){
        cin >> N;

        int *arr = new int[N];

        int sum = 0;
        int Max = 0;
        for(int i = 0; i<N; i++){
            cin >> arr[i];
        }

        for(int i = N-1; i>=0; i--){
            if(Max < arr[i]){
                Max = arr[i];
            }
            else if(Max > arr[i]){
                sum += Max - arr[i];
            }

        }

        cout << sum << endl;
    }
    return 0;
}
