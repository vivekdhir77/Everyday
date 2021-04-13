num=int(input())
for i in range(num):
    var='f'
    n = int(input())
    candles = input().split()
    s1=0
    s2=0
    n2=0
    for j in candles:
        if(int(j)==1):
            s1+=1
        elif(int(j)==2):
            s2+=1
            n2+=2
    if((s1%2==0 and s2%2==0)or(s1!=0 and s2%2!=0 and (s1+n2)%2==0)):
       var='t' 
    if var== 't':
        print("YES")
    else:
        print("NO")