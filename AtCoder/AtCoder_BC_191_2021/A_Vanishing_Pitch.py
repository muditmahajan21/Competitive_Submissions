a,b,c,d = map(int, input().split())
if d >= a*b and d <= a*c:
  print("No")
else:
  print("Yes")