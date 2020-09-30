#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,i;
	long long int posx[100000];
	long long int posy[100000];
	
	cin >> n;
	
	for(i=0;i<n;i++){
		cin >> posx[i] >> posy[i];
	}
		
	int xsum = 0;
	int ysum = 0;
		
	for(i=0;i<n;i++){
		xsum += posx[i];
		ysum += posy[i];
	}
	
	sort(posx,posx+n);
	sort(posy,posy+n);
	
	
	int conxpos = posx[(n-1)/2];
	int conypos = posy[(n-1)/2];
	
	
	int distance = 0;
	
	for(i=0;i<n;i++){
		if((conxpos - posx[i]) >= 0) distance += conxpos - posx[i];
		else distance += -(conxpos - posx[i]);
		if((conypos - posy[i]) >= 0) distance += conypos - posy[i];
		else distance += -(conypos - posy[i]);
	}		
	
	cout << distance;
	
	return 0;
}
		
	
	
