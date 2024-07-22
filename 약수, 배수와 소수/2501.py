a = list(map(int, input().split()))
arr = []

for i in range(a[0]) :
    if a[0] % (i + 1) == 0 :
        arr.append(i + 1)
        
if a[1] > len(arr) :
    print(0)
else :
    print(arr[a[1] - 1])