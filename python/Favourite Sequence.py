num = int(input())
ls_ans= []
for i in range(num):
    no = 0 
    s = [] 
    n1 = int(input())
    c =2
    numbers = list(map(int,input().split()))
    i=n1-1
    while i>=0:
        if c%2==0:
            st=str(numbers[no])
            s.append(st)
            no+=i
        else:
            st=str(numbers[no])
            s.append(st)
            no-=i
        i-=1
        c+=1
    ls_ans.append(s)
for i in ls_ans:
    for j in i:
        print(int(j), end=" ")
    print()