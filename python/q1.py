n=int(input())
for _ in range(n):
    num=int(input())
    lis=list(map(int, input().split()))
    new_lis=[]
    ans1_lis=[]
    ans2_lis=[]
    for __ in lis:
        if lis.count(__)>1:
            new_lis.append(__)#repetitive elements
        else:
            ans2_lis.append(__)#non repetitive elements
    new_lis=list(set(new_lis))#unique repetitive elements
    No_of_unique_repetitive_elements=len(new_lis)
    j=0
    for i in new_lis:
        if (i+1)==new_lis[j]:
            ans1_lis.append(i)#repetitive non consecutive elements
        j+=1
    
    ans= No_of_unique_repetitive_elements-len(ans1_lis)+1
    print(ans)