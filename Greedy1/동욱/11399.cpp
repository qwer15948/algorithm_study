#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int arr[num] = {0,};
    int aSum[num] = {0,};
    int sum = 0;

    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }

    for(int i = 0; i<num; i++){
        for(int j = i+1; j<num; j++){
                if(arr[i] > arr[j]){
                    int temp;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
        }
    }

    for(int i = 0; i<num; i++){
        if(i == 0){
            aSum[i] = arr[i];
        }
        else{
            aSum[i] = aSum[i-1] + arr[i];
        }
        sum = sum + aSum[i];
    }

    cout << sum << endl;

    return 0;
}
