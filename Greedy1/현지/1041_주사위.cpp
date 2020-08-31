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
    	// ���� ū ���� �����ϰ� �� ����  
    	sort(dice, dice + 6);
        for (int i = 0; i < 5; i++)
        {
            answer += dice[i];
        }
    }
    else if (N >= 2)
    {
    	// ���ֺ��� �� �߿� ���� �� ��󳻱� 
    	for (int i = 0; i < 3; i++)
    		mindice[i] = min(dice[i], dice[5 - i]);
     
    	// ��� ���� ������������ ���� 
    	sort(mindice, mindice + 3);
    	
    	  
        long long plane1 = (N - 2)*(N - 2) + (N - 1)*(N - 2)*4; // �� ���� ����Ǵ�  �ֻ����� ����
        answer += plane1 * mindice[0];

        long long plane2 = (N - 2)*4 + (N - 1)*4; // �� ���� ����Ǵ� �ֻ����� ����
        answer += plane2 * (mindice[0] + mindice[1]);

        long long plane3 = 4; // �� ���� ����Ǵ� �ֻ����� ����
        answer += plane3 * (mindice[0] + mindice[1] + mindice[2]);
    }

    cout << answer << endl;
}
