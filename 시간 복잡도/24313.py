a = list(map(int, input().split()))
b = int(input())
c = int(input())

if (a[1] + (c * a[0])) <= b * c :
    print(1)
else :
    print(0)