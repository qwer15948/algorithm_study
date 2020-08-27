#include<cstdio>
#include<algorithm>
using namespace std;
int n, k, a[300000], s;
int main() {
    scanf("%d%d%d", &n, &k, a);
    for (int i = 1; i < n; i++) scanf("%d", a + i), a[i - 1] = a[i] - a[i - 1];
    sort(a, a + n - 1);
    for (int i = 0; i < n - k; i++) s += a[i];
    printf("%d", s);
    return 0;
}