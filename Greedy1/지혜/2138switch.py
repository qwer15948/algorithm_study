n = int(input())
start = list(map(int,input()))
goal = list(map(int,input()))

def change(c_list, ind):
    if ind == 0:
        c_list[0] = not c_list[0]
        c_list[1] = not c_list[1]
    elif ind == n-1:
        c_list[n-1] = not c_list[n-1]
        c_list[n-2] = not c_list[n-2]
    else:
        c_list[ind-1] = not c_list[ind-1]
        c_list[ind] = not c_list[ind]
        c_list[ind+1] = not c_list[ind+1]

def check(c_list):
    count = 0
    
    for i in range(1,n):
        if c_list == goal:
            return count
        if c_list[i-1] == goal[i-1]:
            continue
        else:
            change(c_list, i)
            count += 1

    if c_list[n-1] == goal[n-1]:
        return count
    else:
        return 100001


list1 = start.copy()
 
change(list1, 0)

cnt1 = check(list1) + 1
if cnt1 == 100002:
    cnt2 = check(start)
    if cnt2 == 100002:
        print(-1)
    else:
        print(cnt2) 
else:
    print(cnt1)