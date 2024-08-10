import sys
from collections import Counter

a = int(sys.stdin.readline())
arr = [int(sys.stdin.readline()) for _ in range(a)]

counter = Counter(arr)
max_count = max(counter.values())
modes = [num for num, freq in counter.items() if freq == max_count]

arr.sort()

print(round(sum(arr) / a))  # 산술평균
print(arr[a // 2])  # 중앙값
if len(modes) > 1:
    print(sorted(modes)[1])  # 최빈값 (2번째로 작은 값 출력)
else:
    print(modes[0])
print(arr[-1] - arr[0])  # 범위
