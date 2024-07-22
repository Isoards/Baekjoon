a = list(map(int, input().split()))
arr = list(map(int, input().split()))

arr.sort(reverse=True)
print(arr[a[1] - 1])