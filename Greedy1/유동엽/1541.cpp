#include <iostream>
using namespace std;
int main(void)
{
	int a, sum= 0;
	char b;	
	scanf("%d", &a);
	scanf("%c", &b);
	sum += a; 
	while(1) {
		if(b == '-') {
			while(b != 10) {
				scanf("%d", &a);
				scanf("%c", &b);
				sum -= a;
			}
			break;
		}
		else if(b == '+') {
			scanf("%d", &a);
			scanf("%c", &b);
			sum += a;
		}
		else break;
	}
	printf("%d",sum);
	return 0;
}
