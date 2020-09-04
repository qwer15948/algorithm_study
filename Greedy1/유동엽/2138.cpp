#include <iostream>
#include <cstdio>

using namespace std;

void push_sw(int *init, int n) {
	init[n-1] = !init[n-1];
	init[n] = !init[n];
	init[n+1] = !init[n+1];
}
int equal(int* init, int* rst, int n) {
	for(int i=0; i<n; i++) {
		if(init[i] != rst[i]) return 0;
	}
	return 1;
}
int on_first(int* init, int* rst, int n) {
	int cnt=1;
	init[0] = !init[0];
	init[1] = !init[1];
	for(int i=0; i<n-1; i++) {
		if(init[i] != rst[i]) {
			push_sw(init, i+1);
			cnt++;
		}
	}
	if(equal(init, rst, n)) return cnt;
	return -1;
}
int no_first(int* init, int* rst, int n) {
	int cnt=0;
	for(int i=0; i<n-1; i++) {
		if(init[i] != rst[i]) {
			push_sw(init, i+1);
			cnt++; 
		}
	}
	if(equal(init, rst, n)) return cnt;
	return -1;
}

	
int main(void)
{
	
	int n, case1, case2 = 0;
	cin >> n;
	int init[n];
	int init_back[n];
	int rst[n];  
	for(int i=0; i<n; i++) {
		scanf("%1d", &init[i]);
		init_back[i] = init[i];
	}	
 	for(int i=0; i<n; i++) scanf("%1d", &rst[i]);
	case1 = on_first(init, rst, n);
	case2 = no_first(init_back, rst, n);
	if(case1==0 || case2==0) cout << "0" << endl;
	else if(case1 == -1) cout << case2 << endl;
	else if(case2 == -1) cout << case1 << endl;
	else if(case1 > case2) cout << case2 << endl;
	else cout << case1 << endl;
	return 0;
}
