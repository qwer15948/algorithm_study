n = int(input())
chain = list(map(int, input().split()))

chain.sort()
count = 0
while(1):
    if len(chain) == 1:
        break
    chain[-2] = chain[-2] + chain[-1]
    chain.pop(-1)
    chain[0] = chain[0] - 1
    count += 1
    
    if chain[0] == 0:
        chain.pop(0)

print(count)