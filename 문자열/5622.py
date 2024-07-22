eng = input()
list = list(eng.lower())
result = 0 

for i in range(len(eng)):
    if list[i] in ['a' , 'b' , 'c']:
        result += 3
    elif list[i] in ['d' , 'e' , 'f']:
        result += 4
    elif list[i] in [ 'g' , 'h' , 'i']:
        result += 5
    elif list[i] in [ 'j' , 'k' , 'l']:
        result += 6
    elif list[i] in [ 'm' , 'n' , 'o']:
        result += 7
    elif list[i] in [ 'p' , 'q' , 'r' , 's']:
        result += 8
    elif list[i] in [ 't' , 'u' , 'v']:
        result += 9
    elif list[i] in [ 'w' , 'x' , 'y' , 'z']:
        result += 10
        
print(result)