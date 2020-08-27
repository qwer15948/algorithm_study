import sys
input = sys.stdin.readline

testcase = int(input())

for i in range(testcase):
    profit = 0

    day = int(input())
    price = list(map(int, input().split()))
    
    max_price = 0

    price.reverse()

    for d in price:
        if d > max_price:
            max_price = d
        else:
            profit = profit + (max_price - d)
    print(profit)
