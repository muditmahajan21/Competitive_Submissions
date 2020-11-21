test = int(input())
for _ in range(test):
    n, q = map(int, input().split())
    string = input()

    for _ in range(q):
        l, r = map(int, input().split())
        
        temp = string 
        
        check_left, check_right = 0, 0

        for i in range(len(string) - 1, -1, -1):
            if string[i] == string[r - 1]:
                check_right = i
                break
        
        for i in range(len(string)):
            
            if string[i] == string[l - 1]:
                check_left = i
                break

        if check_right != r - 1 or check_left != l - 1:
            print("YES")
        else:
            print("NO")