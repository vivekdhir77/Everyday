def ascending(Ar):
    Ar.sort()
    return Ar
def decending(Br):
    Br.sort(reverse=True)
    return Br


#John Jackson (friend)
#Jack Jackson
T=int(input())
for i in range(T):
    swap=0
    var= True
    N_no,M_no = input().split()
    N_no= int(N_no)
    M_no= int(M_no)
    N= list(map(int, input().split()))#John
    M= list(map(int, input().split()))
    N= ascending(N)
    M= decending(M)
    sum_N = sum(N)
    sum_M= sum(M)
    if sum_M >= sum_N:
        j=0
        while j!=N_no:
            sum_M+= N[j]-M[j]
            sum_N+= M[j]-N[j]           
            
            temp=M[j]
            M[j]=N[j]
            N[j]=temp
            swap+=1
            j+=1
            if sum_M < sum_N:
                break
    if sum_M < sum_N:
        print (swap)
    if sum_M >= sum_N:
        print('-1')