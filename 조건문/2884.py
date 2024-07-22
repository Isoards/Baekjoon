H, M = map(int,input().split())

if (0 < H < 24 ) and (0 <= M < 60) :
    if (M >= 45):
        print(H, (M-45))
    else :
        print((H-1), (M + 15))
    
elif H == 0 and (0 <= M < 60) :
    if (M >= 45):
        print(H, (M-45))
    else :
        print(23, (M + 15))