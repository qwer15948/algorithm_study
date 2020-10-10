num = int(input())
voca = list() ## voca
char = list() ## character
val = list() ## number value
for i in range(num):
    voca.append(list(input()))
    voca_len = len(voca[i])
    for c in voca[i]:
        ex = char.count(c)
        if(ex == 0):
            char.append(c)
            val.append(10 ** (voca_len-1))
        else:
            ind = char.index(c)
            val[ind] = val[ind] + 10 ** (voca_len-1)
        voca_len = voca_len -1

sum = 0
for n in range(len(char)):
    max_val = max(val)
    sum = sum + max_val * (9-n)
    val.remove(max_val)

print(sum)
