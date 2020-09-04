#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long N;
    long long one,two,three;
    cin >> N;
    long long sum = 0;

    int dice[6] = {0,};
    int n_dice[3];

    for(int i=0; i<6; i++)
    {
        cin >> dice[i];
    }

    if(N==1)
    {
        sort(dice,dice+6);
        for(int i=0; i<5; i++){
            sum = sum + dice[i];
        }
    }
    else
    {
        for(int i=0; i<3; i++)
        {

            if(dice[i]>dice[5-i])
            {
                n_dice[i] = dice[5-i];
            }
            else
            {
                n_dice[i] = dice[i];
            }

        }
        sort(n_dice,n_dice+3);

        one = n_dice[0] * (5*N*N - 16*N +12);
        two = (n_dice[0] + n_dice[1]) * (8*N - 12);
        three = (n_dice[0] + n_dice[1] + n_dice[2]) * 4;
        sum = one + two + three;
    }

    cout << sum << endl;
    return 0;
}
