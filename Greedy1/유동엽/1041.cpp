#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	long long n, one, sec, thr, sum, min = 0;
	cin >> n;
	long A,B,C,D,E,F = 0;
	cin >> A >> B >> C >> D >> E >> F;
	
	one = 4*(n-1)*(n-2) + (n-2)*(n-2);
	sec = 4*(n-1) + 4*(n-2);
	thr = 4;
	
	if(n == 1) {
		int max = A;
		if(B > max) max = B;
		if(C > max) max = C;
		if(D > max) max = D;
		if(E > max) max = E;
		if(F > max) max = F;
		
		cout << A+B+C+D+E+F-max << endl;
		return 0;
	}
	
	min = A+C+E;
	
	if(F+C+E < min) min = F+C+E;
	if(A+E+D < min) min = A+E+D;
	if(A+B+C < min) min = A+B+C;
	if(F+E+D < min) min = F+E+D;
	if(A+B+D < min) min = A+B+D;
	if(F+B+C < min) min = F+B+C;
	if(F+B+D < min) min = F+B+D;
	
	sum += (min*thr);
	
	min = A+B;
	if(A+C < min) min = A+C;
	if(A+D < min) min = A+D;
	if(A+E < min) min = A+E;
	if(B+F < min) min = B+F;
	if(F+D < min) min = F+D;
	if(F+C < min) min = F+C;
	if(F+E < min) min = F+E;
	if(E+C < min) min = E+C;
	if(B+C < min) min = B+C;
	if(B+D < min) min = B+D;
	if(E+D < min) min = E+D;
	
	sum += (min*sec);
	
	min = A;
	if(B < min) min = B;
	if(C < min) min = C;
	if(D < min) min = D;
	if(E < min) min = E;
	if(F < min) min = F;
	
	sum += (min*one);
	
	cout << sum << endl;	
	
	return 0;
}
