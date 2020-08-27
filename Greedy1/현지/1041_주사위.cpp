#include <iostream>
#include <algorithm>
using namespace std;

int dice[6];
int mindice[3];
long long answer, N;

int main()
{
    cin >> N;

    for (int i = 0; i < 6; i++)
    {
        cin >> dice[i];
    }
    
    if (N == 1)
    {
    	// 제일 큰 수를 제외하고 다 더함  
    	sort(dice, dice + 6);
        for (int i = 0; i < 5; i++)
        {
            answer += dice[i];
        }
    }
    else if (N >= 2)
    {
    	// 마주보는 면 중에 작은 수 골라내기 
    	for (int i = 0; i < 3; i++)
    		mindice[i] = min(dice[i], dice[5 - i]);
     
    	// 골라낸 수를 오름차순으로 정렬 
    	sort(mindice, mindice + 3);
    	
    	  
        long long plane1 = (N - 2)*(N - 2) + (N - 1)*(N - 2)*4; // 한 면이 노출되는  주사위의 개수
        answer += plane1 * mindice[0];

        long long plane2 = (N - 2)*4 + (N - 1)*4; // 두 면이 노출되는 주사위의 개수
        answer += plane2 * (mindice[0] + mindice[1]);

        long long plane3 = 4; // 세 면이 노출되는 주사위의 개수
        answer += plane3 * (mindice[0] + mindice[1] + mindice[2]);
    }

    cout << answer << endl;
}
