#https://www.codechef.com/START1C/problems/MVALUE
for _ in range(int(input())):
    N= int(input())
    m1=0
    m2=0
    A=list(map(int, input().split()))
    A.sort()
    b1= A[0]#1st least -ve
    a1= A[1]#2nd least -ve
    a2=A[-1]#1st maxi
    b2=A[-2] #2nd maxi   
    if ((a1-b1)>(b1-a1)):
        m1= a1*b1 + (a1-b1)
    else:
        m1= a1*b1 + (b1-a1)
    
    if ((a2-b2)>(b2-a2)):
        m2= a2*b2 + (a2-b2)
    else:
        m2= a2*b2 + (b2-a2)
        
    if (m1>m2):
        print(m1)
    else:
        print(m2)