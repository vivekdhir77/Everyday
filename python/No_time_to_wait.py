N=int(input())
H=int(input())
x=int(input())
req= H-x
check=0
T= list(map(int,input().split()))
for i in T:
    if (i>=reeq):
        print("YES")
        check=1
if (check == 0):
    print("NO")
