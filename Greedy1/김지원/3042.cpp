#include <iostream>

int n; 
char A[100][101]; 
int x[26], y[26], m=0; 
	
int CCW(int x1, int y1, int x2, int y2, int x3, int y3) { 
	int temp = x1 * y2 + x2 * y3 + x3 * y1; 
	temp -= (x2 * y1 + x3 * y2 + x1 * y3); 
	if (temp > 0) return 1; 
	else if (temp < 0) return -1; 
	return 0; 
} 
	
int main() {
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> A[i];
		for (int j = 0; j < n; ++j) 
			if (A[i][j] != '.') { 
				x[m] = i; 
				y[m] = j; 
				m++; 
			} 
	} 
	int ans = 0; 
	
	for (int i = 0; i < m; ++i) 
		for (int j = i + 1; j < m; ++j) 
			for (int k = j + 1; k < m; ++k) { 
				int retCCW = CCW(x[i], y[i], x[j], y[j], x[k], y[k]); 
				if (retCCW == 0) ans++; 
			} 
			
	std::cout << ans;
	return 0; 
}
