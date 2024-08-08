import sys
import math

a, b = map(int,sys.stdin.readline().split())

print(int(math.factorial(a) / math.factorial(b) / math.factorial(a-b)))
