import sys

def fibonacci(a) :
    if a == 0 :
        return 0
    elif a == 1 :
        return 1
    else :
        return fibonacci(a - 1) + fibonacci(a - 2)
    
print(fibonacci(int(sys.stdin.readline())))