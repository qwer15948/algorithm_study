#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int cnt = 0;

    if(a==0){
        printf("%d",-1);
        return 0;
    }

    for(int i=1; i<=b; i++){
        if(b%a == 0){
            if(b%i == 0){
                cnt++;
                if(i==a) break;
            }
        }
        else{
            cnt = -1;
        }
    }

    printf("%d",cnt);

    return 0;
}
