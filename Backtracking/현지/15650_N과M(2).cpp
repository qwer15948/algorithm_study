#include <iostream>

using namespace std;

const int MAX = 8 + 1;
int permutation[MAX];
bool visited[MAX];
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
        if( !visited[i] )
        {
            visited[i] = true;
            permutation[depth] = i;
            func(depth + 1, i);
            visited[i] = false;
        }
    }
}

int main()
{
    cin >> N >> M;

    func( 0 , 1);
}
