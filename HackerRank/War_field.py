import statistics as stat
n=int(input())
arr1=[]
arr2=[]
for i in range(n):
    list1,list2=list(map(int,input().split()))
    arr1.append(list1)
    arr2.append(list2)
mid1=stat.median(arr1)
mid2=stat.median(arr2)
sum1 = 0
sum2 = 0
for i in range(n):
    sum1 = sum1 + abs(arr1[i]-mid1)
    sum2 = sum2 + abs(arr2[i]-mid2)
ans = int(min(sum1,sum2))
print(ans)    