#include <iostream>
#include <string>
using namespace std;

int charToInt(int character[5], int& k)
{
	int number = 0;
	for (int i = 0; i < k; i++)
	{
		number += character[i];
		number *= 10;
	}

	k = 0;
	return number/10;
}

int main()
{
	int result[25] = { 0, };
	int character[5];
	string expression;

	cin >> expression;

	int j = 0, k = 0;
	for (int i = 0; i < expression.size(); i++) 
	{
		if ('0' <= expression[i] && expression[i] <= '9')
		{
			character[k++] = expression[i] - '0';
		}
		else if (expression[i] == '-')
		{
			result[j++] += charToInt(character, k);
		}
		else if (expression[i] == '+')
		{
			result[j] += charToInt(character, k);
		}
	}
	result[j] += charToInt(character, k);

	for (int i = 1; i <= j; i++)
	{
		result[0] -= result[i];
	}

	cout << result[0];
}