try:
    test = int(input())
    for _ in range(test):
        n, k = map(int, input().split())
        arr = list(map(int, input().split()))

        s = sum(arr) 
        if n == 1 or s < 2 * k:
            print(-1) 
            continue 
        else:
            min_sum = []  

            arr.sort(reverse = True) 

            flag = False 
            ans = 0

            min_sum.append(arr[0]) 
            temp_sum = arr[0] 

            for i in range(1, n):
                min_sum_temp = [] 
                temp_sum += arr[i] 

                for ele in min_sum:
                    t = [ele, arr[i], ele + arr[i]]
                    min_sum_temp += t 

                    if ele + arr[i] >= k:
                        if temp_sum - (ele + arr[i]) >= k:
                            
                            ans = i + 1
                            flag = True 
                            break 
                    if arr[i] >= k:
                        if temp_sum - arr[i] >= k:
                            ans = i + 1
                            flag = True 
                            break
                
                if(flag):
                    break
                
                min_sum = min_sum_temp.copy() 
            
            if(flag):
                print(ans) 
            else:
                print(-1)

except:
    pass