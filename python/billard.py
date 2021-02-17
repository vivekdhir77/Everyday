T=int(input())
for i in range(T):
    inp=list(map(int, input().split()))
    X=0
    Y=0
    N=inp[0]
    K=inp[1]
    x=inp[2]
    y=inp[3]
    if x>y:
        if K%4 == 1:
            X= N
            Y= y+ N-x
        elif K%4 == 2:
            X= y+N-x
            Y= N
        elif K%4 == 3:
            X= 0
            Y= x-y
        elif K%4 == 0:
            X= x-y
            Y= 0
    elif y>x:
        if K%4 == 1:
            X= N+x-y
            Y= N
        elif K%4 == 2:
            X= N
            Y=N+x-y
        elif K%4 == 3:
            X= y-x
            Y= 0
        elif K%4 == 0:
            X= 0
            Y=y-x
    elif y==x:
        Y= N
        X= N
    print (X,Y)