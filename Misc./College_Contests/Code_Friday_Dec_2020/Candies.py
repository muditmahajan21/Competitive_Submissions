n = int(input())
arr = list(map(int, input().split())) 
arr = arr[::-1]

for i in range(n - 1):
    if arr[i] > arr[i + 1]:
        pass 
    else:
        arr[i + 1] = arr[i] - 1 
        if arr[i + 1] == arr[i] or arr[i + 1] < 0:
            arr[i + 1] = 0 

print(sum(arr))