n, l = input().split()
n = int(n)
l = int(l)
point = list(map(int, input().split())) ## n.
point.sort()
tape = 1
start_point = point[0] - 0.5
for i in range(1, n):
    if( point[i] + 0.5 <= start_point + l):
        continue
    else:
        start_point = point[i] - 0.5
        tape += 1

print(tape)