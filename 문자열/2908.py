arr = list(map(int,input().split()))

a = str(arr[0])[::-1]
b = str(arr[1])[::-1]

if a > b :
    print(a)
else :
    print(b)