#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num;
    int sum = 0;
    int cnt = 0;

    cin >> num;


    int arr[num] = {0,};

    for(int i=0; i<num; i++){
        cin >> arr[i];
    }

    sort(arr,arr+num);

    int i=0;

    for(int j=num-1; j>=0; j--){

        if(arr[j-1] == sum){
            break;
        }
        else{
            arr[i]--;
            cnt++;
            if(arr[i] == 0){
                i++;
            }
        }

        arr[j-1] = arr[j-1] + arr[j] + 1;
        arr[j] = 0;
    }

    cout << cnt << endl;

    return 0;
}
