T= int(input())
for _ in range(T):
    ls=list(map(int,input().split()))
    N=ls[0]
    K=ls[1]
    a = list(map(int,input().split()))
    
    
    for __ in range(N):
        sum=0
        s = input()
        for ___ in range(K):
            if (int(s[___])==1):
                sum = sum + a[___]
        print (sum)

"""3
2 2
1 2
01
10
2 2
1 2
11
00
2 1
100
0
1"""