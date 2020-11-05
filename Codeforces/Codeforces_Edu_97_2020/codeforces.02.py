try:
    test = int(input())
    for _ in range(test):
        n = int(input())
        str = input()
        ans = ""
        str1 = str.replace("10", "")
        str2 = str.replace("01", "")
        
        if len(str1) <= len(str2):
            ans = str1 
        else:
            ans = str2

        print(len(ans) // 2)
except:
    pass