#include <cstdio>

#define max(a,b) ((a)>(b)?(a):(b))

int N;

int arr[1000000];

int main() {

    int T;

    scanf("%d", &T);

    while (T--) {

        scanf("%d", &N);

        for (int n = 0; n < N; n++) scanf("%d", &arr[n]);


        long long ans = 0;

        int ma = arr[N - 1];

        for (int n = N - 2; n >= 0; n--) {

            if (arr[n] < ma)

                ans += 1LL * (ma - arr[n]);

            else ma = arr[n];

        }

        printf("%lld\n", ans);

    }

    return 0;

}
