H, M = map(int,input().split())
N = int(input())
C = (M + N) // 60

if (0 <= H < 24 ) and (0 <= M < 60) :
    if (M + N < 60 ) :
        print(H, (M + N))
    else :
        print(((H + C) % 24), ((M + N) % 60))