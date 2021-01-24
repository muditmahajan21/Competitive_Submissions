test = int(input())
for _ in range(test):
    n = int(input())
    s = input()
    p = input() 

    if s == p:
        print("Yes")
        continue 

    count0_0, count0_1, count1_0, count1_1 = 0, 0, 0, 0 

    for i in range(n):
        if s[i] == '0':
            count0_0 += 1 
        else:
            count0_1 += 1 
        if p[i] == '0':
            count1_0 += 1
        else: 
            count1_1 += 1

    if count0_0 != count1_0 or count0_1 != count1_1:
        print("No")
    else:
        flag = True 

        index_s, index_p = [], [] 

        for i in range(n):
            if s[i] == '0':
                index_s.append(i) 
            if p[i] == '0':
                index_p.append(i)

        for i in range(len(index_s)):
            if index_s[i] < index_p[i]:
                flag = False 
                break 

        if flag:
            print("Yes")
        else:
            print("No")