test = int(input())
for _ in range(test):
    string = input() 
    count = {}

    for i in range(len(string)):
        if string[i] in count:
            count[string[i]] += 1 
        else:
            count[string[i]] = 1

    temp, temp_count = 0, 0 

    for key, value in count.items():
        temp += value // 2 
        temp_count += value % 2 

    ans = 0

    if temp <= temp_count:
        ans = temp
    else:
        ans += temp_count 
        temp -= temp_count 
        ans += temp // 3 * 2
        if temp % 3 == 2:
            ans += 1
    
    print(ans)