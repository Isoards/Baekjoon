import sys
import math

a = int(sys.stdin.readline())

for _ in range(a) :
    n, m = map(int, sys.stdin.readline().split())
    print(int(math.factorial(m) // math.factorial(n) // math.factorial(m - n)))
