#include <iostream>
using namespace std;

int answer;
int main()
{
	int E, EM, M, MH, H;
	cin >> E >> EM >> M >> MH >> H;
	
	while(true)
	{
 		if (E != 0) 
 			--E;
 		else if (EM != 0) 
 			--EM;
 		else break;
 		
 		if (M != 0)
 			--M;
 		else if (EM != 0 || MH != 0)
 			if (EM >= MH)
 				--EM;
 			else
 				--MH;
 		else 
 			break;
 		
 		if (H != 0)
 			--H;
 		else if (MH != 0)
 			--MH;
 		else break;
 		
 		answer++;
	}
	cout << answer << '\n';
}
