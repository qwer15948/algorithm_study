n = int(input())
time = list(map(int, input().split()))
time.sort()

total_time = 0
curr_time = 0

for i in time:
    curr_time = curr_time + i
    total_time = total_time + curr_time

print(total_time)