a = int(input())
b = int(input())
result = []

for i in range(a, b + 1) :
    error = 0
    if i > 1 :
        for j in range(2, i) :
            if i % j == 0:
                error += 1
                break
        if error == 0 : 
            result.append(i)

if len(result) > 0 :
    print(sum(result))
    print(min(result))
else :
    print(-1)