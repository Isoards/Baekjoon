N = int(input())
result = ""
if (4 <= N <= 1000) and (N % 4 == 0 ) :
    for i in range(N // 4) :
        result += "long "
print(result + "int")