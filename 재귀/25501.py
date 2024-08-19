import sys

def recursion (s, l, r, count) :
    count += 1
    if (l >= r) :
        return 1, count
    elif (s[l] != s[r]) :
        return 0, count
    else : 
        return recursion(s, l + 1, r - 1, count)

def isPalindrome (s, count) :
    return recursion(s, 0, len(s) - 1, count)


a = int(sys.stdin.readline().rstrip())

for i in range(a) :
    count = 0
    result = isPalindrome(sys.stdin.readline().rstrip(), count)
    print(result[0], result[1])