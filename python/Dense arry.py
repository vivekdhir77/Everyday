#https://codeforces.com/contest/1490/problem/A

for __ in range(int(input())):
    n = int(input())
    nos = list(map(int,input().split()))
    count = 0
    temp = n
    nosf = []
    count =0
    for i in range(0,n-1):
        max1 = max(nos[i],nos[1+i])
        min1 = min(nos[i],nos[i+1])
        if(max1/min1>2):
            while(max1/min1>2):
                min1 = min1*2
                count+=1
    print(count)