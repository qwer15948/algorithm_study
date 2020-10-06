testcase_num = 1
while(True):
    testcase = list(map(int, input().split()))
    ## testcase[0] => available
    ## testcase[1] => camping
    ## testcase[2] => holiday
    if(testcase[0] == 0):
        break
    q = testcase[2] // testcase[1]
    r = testcase[2] % testcase[1]
    j = testcase[0] - r
    if(j < 0):
        j = 0
    days = (q + 1) * testcase[0] - j
    print("Case %d: %d" % (testcase_num, days))
    testcase_num += 1