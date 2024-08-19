import sys

def kantor (a, p, r) :
    n = 3 ** a
    arr = ["-" for _ in range(n)]
    print(arr)
    q = n // 3
    
    arr[q:-q] = " "
    print(arr)
    
a = int(sys.stdin.readline())

kantor(a, 0, a - 1)