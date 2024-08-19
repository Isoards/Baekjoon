import sys
from collections import Counter

a, b = map(int, sys.stdin.readline().split())
arr = []

for _ in range(a) :
    n = sys.stdin.readline().rstrip()
    if len(n) < b :
        continue
    else :
        arr.append(n)

counter = Counter(arr)

result = sorted(counter.items(), key=lambda x: (-x[1], -len(x[0]), x[0]))
# -x[1]은 빈도수가 높은 순서대로, -len(x[0])은 길이가 긴 순서대로, x[0]은 사전 순서대로 정렬

for i in result :
    print(i[0])
