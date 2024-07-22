a = int(input())
def devide(A) :
    if A > 1 :
        for i in range(2, A + 1) :
            if (A % i) == 0 :
                print(i)
                devide(int(A / i))
                break
    elif A == 1 :
        pass

devide(a)
#    while b[0] / 2 == int(b[0] / 2) : 이렇게했다가 실패함
#        if b[0] / 2 == int(b[0] / 2) :
#            b[0] = (int(b[0] / 2))
#            b.append(2)
#            
#    while b[0] / 3 == int(b[0] / 3) :
#        if b[0] / 3 == int(b[0] / 3) :
#            b[0] = (int(b[0] / 3))
#            b.append(3)
#    
#    b.sort()
#    
#    if b[0] == 1 :
#        b.remove(1)
#        
#    for i in range(len(b)) :
#        print(b[i])
#    
#elif a == 1 :
#    pass