a = int(input())
result = [0 for i in range(a)]
score = list(map(int,input().split()))
arr = score[:a]
sum = 0

for i in range(a) :
    M = max(arr)
    result[i] = arr[i] / M * 100
    sum += result[i]

print(sum / a)