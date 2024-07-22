a = list(map(int,input().split()))
b = list(map(int,input().split()))
result = 0

for i in range(a[0]) :
    for j in range(i + 1, a[0]) :
        for l in range(j + 1, a[0]) :
            if b[i] + b[j] + b[l] > a[1] :
                continue
            else :
                result = max(result, b[i] + b[j] + b[l])
                
print(result)

