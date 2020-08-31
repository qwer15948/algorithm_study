n = int(input())
dice = list(map(int, input().split()))

min_list = []
min_list.append(min(dice[0], dice[5])) # a,f
min_list.append(min(dice[1], dice[4])) # b,e
min_list.append(min(dice[2], dice[3])) # c,d
min_list.sort()

if n == 1:
    print(sum(dice) - max(dice))
else:
    three = 4 * sum(min_list)
    two = (8 * (n-2) + 4) * (min_list[0] + min_list[1])
    one = ((n-2) * (n-2) * 5 + (n-2) * 4) * min_list[0]
    print(three + two + one)
