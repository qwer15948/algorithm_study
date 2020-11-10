#include <iostream>

using namespace std;

const int MAX = 7 + 1;
int permutation[MAX];
int N, M;

void func (int depth, int previous)
{
    if (depth == M)
    {
        for (int i = 0; i < M; i++)
            cout << permutation[i] << ' ';
        cout << '\n';
        return ;
    }

    for (int i = previous; i <= N; i++)
    {
        permutation[depth] = i;
        func(depth + 1, i);
    }
}

int main()
{
    cin >> N >> M;

    func( 0 , 1);
}
