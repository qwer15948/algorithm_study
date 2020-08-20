num_list = input().split('-')

nSum = 0

plus_list = list(map(int, num_list[0].split('+')))
nSum = sum(plus_list)

for i in num_list[1:]:
    minus_list = list(map(int, i.split('+')))
    nSum = nSum - sum(minus_list)

print(nSum)

