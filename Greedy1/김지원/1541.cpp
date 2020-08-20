#include <iostream>
#include <string>

using namespace std;

string str;

int change() {

	int total=0;
	string temp = "";
	int minus = false;

	for (int i = 0; i <= str.size(); i++) {
		if (str[i] == '-' || str[i] == '+' || str[i] == '\0') {
			if (minus)
				total -= stoi(temp);
			else
				total += stoi(temp);
			temp = "";

			if (str[i] == '-')
				minus = true;

		}
		else
			temp += str[i];
	}

	return total;

}

int main() {

	cin >> str;

	cout << change() << endl;
	return 0;
}
