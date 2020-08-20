n = int(input())

meeting = [list(map(int, input().split())) for i in range(n)]
meeting.sort(key=lambda x: (x[1], x[0]))

count = 0
prev_end = 0

for time in meeting:
    if time[0] >= prev_end:
        count += 1
        prev_end = time[1]

print(count)