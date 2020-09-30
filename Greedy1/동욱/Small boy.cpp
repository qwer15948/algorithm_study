#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int arr[9] = {0,};
    int sum = 0;

    for(int i=0; i<9; i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }

    int diff = sum - 100;

    for(int i=0; i<9; i++){
        for(int j=i+1; j<9; j++){
            if(arr[i] + arr[j] == diff){
                arr[i] = 0;
                arr[j] = 0;
                break;
            }
        }
    }

    for(int i=0; i<9; i++){
        if(arr[i]!=0){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}
