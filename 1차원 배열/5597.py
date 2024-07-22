arr = list(range(31))
del arr[0]

for i in range(28) :
    a = int(input())
    arr.remove(a)
    
for i in arr :
    print(i)