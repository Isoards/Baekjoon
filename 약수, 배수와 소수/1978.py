a = int(input())
b = list(map(int, input().split()))
result = 0

for i in range(a) :
    count = 0
    for j in range(b[i] - 1) :
        if b[i] % (j + 2) != 0:
            count += 1
    if count == b[i] - 2 : 
        result += 1
        
print(result)