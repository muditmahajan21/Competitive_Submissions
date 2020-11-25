def merge_the_tools(string, k):
    for i in range(0, len(string), k):
        res = ""
        for j in string[i : i + k]:
            if j not in res:
                res += j          
        print(res)

