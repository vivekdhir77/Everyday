#https://www.codechef.com/CCRC21C/problems/CHEFPAT

for _ in range(int(input())):
    N = int(input())
    no = list(map(int,input().split()))
    a = no.copy()
    an = list()
    for i in range(0,N):
        an.append(0)
    
    no.sort(reverse=True)
    j=1
    for i in no:
        ind  = a.index(i)
        an[ind]=j
        j+=1
        a[ind]='a'
    for y in an:
        print(y,end=" ")
    print()