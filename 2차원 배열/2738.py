arr1, arr2 = [], []

a, b = map(int, input().split())

for i in range(a):
    i = list(map(int, input().split()))
    arr1.append(i)

for i in range(a):
    i = list(map(int, input().split()))
    arr2.append(i)
    
for i in range(a):
    for j in range(b):
        print(arr1[i][j] + arr2[i][j], end=' ')
    print()