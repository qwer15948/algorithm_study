#include <iostream>
#include <algorithm>
						
using namespace std;
							
int easy(int *prob) {				
	if(prob[0] != 0) {
		prob[0]--;
		return 1;
	}
	else if(prob[1] != 0) {
		prob[1]--;
		return 1;
	}
	else return 0;
}
int normal(int *prob) {
	if(prob[2] != 0) {
		prob[2]--;
		return 1;
	}
	else if(prob[1] != 0 && (prob[1] > prob[3])) {
		prob[1]--;
		return 1;
	}
	else if(prob[3] != 0) {
		prob[3]--;
		return 1;
	}
	
	else return 0;
}

int hard(int *prob) {
	if(prob[4] != 0) {
		prob[4]--;
		return 1;
	}
	else if(prob[3] != 0) {
		prob[3]--;
		return 1;
	}
	else return 0;
}
								
int main(void)						
{
 	int prob1[5];
 	int prob2[5];
 	int prob3[5];
 	for(int i=0; i<5; i++) {
 		cin >> prob1[i];
 		prob2[i] = prob1[i];
 		prob3[i] = prob1[i];
	}
	int ans[3] = {0};
	while(easy(prob1) && hard(prob1) && normal(prob1)) ans[0]++;
	while(hard(prob2) && easy(prob2) && normal(prob2)) ans[1]++;
	while(normal(prob3) && hard(prob3) && easy(prob3)) ans[2]++;
	sort(ans, ans+3);
	cout << ans[2] << endl;
	return 0;
}
