#include <iostream>
#include <vector>
using namespace std;

class point {
public:
	double x, y;
	point(double x, double y) {
		this->x = x;
		this->y = y;
	}
	point(){}
};

int main() {

	int n;
	cin >> n;

	char** grid = new char* [n];
	for (int i = 0; i < n; i++)
		grid[i] = new char[n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> grid[i][j];

	vector<point> v;
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (grid[i][j] != '.') {
				point temp(i, j);
				v.push_back(temp);
			}
		}

	int count = 0;
	for (int i = 0; i < v.size() - 2; i++) {
		for (int j = i + 1; j < v.size() - 1; j++) {
			for (int k = j + 1; k < v.size(); k++) {
				double a = (v[i].x - v[j].x) / (v[i].y - v[j].y);
				double b = (v[j].x - v[k].x) / (v[j].y - v[k].y);
				double c = (v[i].x - v[k].x) / (v[i].y - v[k].y);
				if(a==b && a==c && b==c){
					count++;
				}
			}
		}
	}
	cout << count;

	return 0;
}