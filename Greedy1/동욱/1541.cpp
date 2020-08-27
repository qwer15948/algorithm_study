#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    string tmp = "";
    int result = 0;

    cin >> input;
    bool minus = false;

    for (unsigned int i = 0; i <= input.length(); i++) {
        if (input[i] == '+' || input[i] == '-' || input[i] == '\0') {
            if (minus) {
                result -= stoi(tmp);
            }
            else {
                result += stoi(tmp);
            }

            tmp = "";
            if (input[i] == '-') {
                minus = true;
            }
        }
        else {
            tmp += input[i];
        }
    }
    cout << result << endl;

    return 0;
}
