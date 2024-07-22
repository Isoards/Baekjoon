import sys
case = int(sys.stdin.readline())

for i in range(case) :
    print(str(" " * (case - (i + 1)))+ str("*" * (i + 1)))