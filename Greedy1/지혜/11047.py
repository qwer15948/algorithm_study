n, k = input().split()
n = int(n)
k = int(k)
coin = 0

l = []
for i in range(n):
    l.append(input())

coin_list = [int(i) for i in l]
coin_list.sort(reverse=True)

for i in coin_list:
    if(k == 0):
        break
    if(k < i):
        continue
    else:
        coin = coin + int(k / i)
        k = k % i

print(coin)