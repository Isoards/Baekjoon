import sys

a = int(sys.stdin.readline())
result = 1

for i in range(1, a + 1) :
    result *= i
    
print(result)