level = list(map(int, input().split()))

min_set = min(level[0], level[2], level[4])
cnt = min_set
level[0] -= min_set
level[2] -= min_set
level[4] -= min_set

while(1):
    easy = False
    nomal = False
    hard = False
    if level[0]:
        level[0] -= 1
        easy = True
    else:
        if level[1]:
            level[1] -= 1
            easy = True
    
    if level[4]:
        level[4] -= 1
        hard = True
    else:
        if level[3]:
            level[3] -= 1
            hard = True

    if level[2]:
        level[2] -= 1
        nomal = True
    else:
        if level[1] or level[3]:
            if level[1] >= level[3]:
                level[1] -= 1
                nomal = True
            else:
                level[3] -= 1
                nomal = True

    if (easy and nomal and hard) == False:
        break
    else:
        cnt += 1

print(cnt)