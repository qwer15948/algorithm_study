from itertools import combinations
N, M = map(int, input().split())
for n in combinations(range(1, N+1), M):
    print(*n)