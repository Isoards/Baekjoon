a = []
m = []

for i in range(9) :
    a.append(list(map(int, input().split())))
    m.append(max(a[i]))

print(max(m))
    
for i in range(9) :
    if max(m) in a[i] :
        print(i + 1, a[i].index(max(m)) + 1)
        break