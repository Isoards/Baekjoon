import sys
case = int(sys.stdin.readline())

for i in range(case) :
    A, B = map(int, sys.stdin.readline().split())
    print("Case #" + str((i + 1)) +": " + str((A + B)))