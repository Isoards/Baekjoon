X = int(input())
total = 0 

if (1 <= X <= 1000000000) :
    N = int(input())
    if (1 <= N <= 100) :
        for i in range(N) :
            a, b = map(int,input().split())
            if (1 <= a <= 1000000) and (1 <= b <= 10) :
                total += a * b

if (X == total) :
    print("Yes")
else :
    print("No")