#include <iostream>
#include <cmath>
using namespace std;

int main() {

    //뺄셈기호 뒤에 나오는 덧셈으로 묶인 수들은 모두 괄호
    //첫수는 무조건 양수이게됨
    char arr[50];
    cin >> arr;
    
    int count = 0;//숫자의 개수
    int d = 0;//각 숫자의 자릿수
    int i=0, j;
    long long int temp = 0;
    long long int sum = 0;
    
    int n=0;
    while (1) {
        if (arr[i] == '-') {//-가 나오면 그 뒤로 다 빼기
            for (int k = 0; k < d; k++) {
                temp += (arr[i - k-1] - 48) * pow(10, k);
            }
            sum += temp;
            temp = 0;
            d = 0;
            for (n = i + 1; arr[n-1] != '\0'; n++) {
                if (arr[n] == '+' || arr[n] == '-') {
                    for (int k = 0; k < d; k++) {
                        temp += (arr[n - k-1] - 48) * pow(10, k);
                    }
                    sum -= temp;
                    temp = 0;
                    d = 0;
                    n++;
                }
                else if (arr[n] == '\0') {
                    for (int k = 0; k < d; k++) {
                        temp += (arr[n - k-1] - 48) * pow(10, k);
                    }
                    sum -= temp;
                    temp = 0;
                    d = 0;
                    break;
                }
                d++;
            }
        }
        if (arr[i] == '\0') {//한문자만 입력됐을때
            for (int k = 0; k < d; k++) {
                temp += (arr[i - k-1] - 48) * pow(10, k);
            }
            sum += temp;
            temp = 0;
            break;
        }
        if (arr[i] == '+') {//+만 있을때
            for (int k = 0; k < d; k++) {
                temp += (arr[i - k-1] - 48) * pow(10, k);
            }
            sum += temp;
            temp = 0;
            d = 0;
            i++;
        }
        if (arr[n] == '\0') break;//-계산하다가 끝 만났을때
        i++;
        d++;
    }
    cout << sum << endl;
   

    return 0;
}