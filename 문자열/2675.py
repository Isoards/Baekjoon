a = int(input())

for i in range(a) :
    a = list(map(str,input().split()))
    b = int(a[0])
    c = list(a[1])
    
    for i in range(len(c)) :
        print(c[i] * b, end="") 
    print()