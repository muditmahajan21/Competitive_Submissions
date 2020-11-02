n = int(input())
phone = {}
for _ in range(n):
    name, number = input().split()
    number = int(number)
    phone[name] = number
while True:
    try:    
        query = input()
        if query in phone:
            print(query + "=" + str(phone[query]))
        else:
            print("Not found")
    except:
        break
