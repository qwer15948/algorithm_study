#include <iostream>
#include <cmath>
using namespace std;

int main() {

    //������ȣ �ڿ� ������ �������� ���� ������ ��� ��ȣ
    //ù���� ������ ����̰Ե�
    char arr[50];
    cin >> arr;
    
    int count = 0;//������ ����
    int d = 0;//�� ������ �ڸ���
    int i=0, j;
    long long int temp = 0;
    long long int sum = 0;
    
    int n=0;
    while (1) {
        if (arr[i] == '-') {//-�� ������ �� �ڷ� �� ����
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
        if (arr[i] == '\0') {//�ѹ��ڸ� �Էµ�����
            for (int k = 0; k < d; k++) {
                temp += (arr[i - k-1] - 48) * pow(10, k);
            }
            sum += temp;
            temp = 0;
            break;
        }
        if (arr[i] == '+') {//+�� ������
            for (int k = 0; k < d; k++) {
                temp += (arr[i - k-1] - 48) * pow(10, k);
            }
            sum += temp;
            temp = 0;
            d = 0;
            i++;
        }
        if (arr[n] == '\0') break;//-����ϴٰ� �� ��������
        i++;
        d++;
    }
    cout << sum << endl;
   

    return 0;
}