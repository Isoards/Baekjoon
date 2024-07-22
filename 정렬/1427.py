import sys

a = list(sys.stdin.readline())

a.sort(reverse=True)

for i in range(len(a)) :
    print(a[i], end='')