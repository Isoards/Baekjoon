arr = [[0 for _ in range(101)] for _ in range(101)]
a = int(input())
result = 0

for _ in range(a) :
    x, y = (map(int, input().split()))
    for i in range(x, x + 10) :
        for j in range(y, y + 10) :
            arr[i][j] = 1
            
for k in range(100):
    result += arr[k].count(1)
    
print(result)