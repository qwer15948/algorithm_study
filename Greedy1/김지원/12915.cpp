#include <iostream>

int main(void){
	int e, em, m, mh, h;
	int count = 0;
	std::cin >> e >> em >> m >> mh >> h;
	while(true){
		if((em==0 || mh ==0) && (e==0 || m==0 || h==0)) break;
		else{
			if(e>=1) e--;
			else em--;
			if(m>=1) e--;
			else if (em>=1) em--;
			else if (mh>=1) mh--;
			if (h>=1) h--;
			else if (mh>=1) mh--;
			count++;
		}
	}
	std::cout << count;
	return 0;
}

