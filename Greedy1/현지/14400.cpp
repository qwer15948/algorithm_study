#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
	// input
	int n;
	cin >> n;
	
	int posX[100000];
	int posY[100000];
	for (int i = 0; i < n; i++)
	{
		cin >> posX[i] >> posY[i];
	}
	
	// 1. sort position
	sort(posX, posX + n);
	sort(posY, posY + n);
	
	// 2. find the median
	int midX = posX[n/2];
	int midY = posY[n/2];
	
	// 3. get minimum distance
	long long minX = 0;
	long long minY = 0;
	for (int i = 0; i < n; i++)
	{
		minX += abs(midX - posX[i]);
		minY += abs(midY - posY[i]);
	}
	
	// output
	cout << minX + minY << endl;
}
