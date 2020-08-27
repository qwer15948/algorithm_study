import sys
input = sys.stdin.readline

n, k = input().split()
n = int(n)
k = int(k)

h = list(map(int, input().split()))
diff = []
for i in range(n-1):
    diff.append(h[i+1] - h[i])

diff.sort(reverse=True)
print(sum(diff[k-1:]))