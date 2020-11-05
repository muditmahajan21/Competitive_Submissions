if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    arr1 = list(dict.fromkeys(arr))
    arr1.sort(reverse=True)
    arr= list(arr1)
    #print(arr)
    print(arr[1])
