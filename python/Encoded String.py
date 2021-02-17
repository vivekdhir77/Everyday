n=int(input())
answer=[]
for i in range(n):
    num=int(input())
    string=input()
    ans=[]
    st=''
    for j in range(1, num+1):
        if j%4 != 0:
            st+= string[j-1]
        else:
            st+=string[j-1]
            ans.append(st)
            st=''
    for k in ans:
        if k[0] == '0':# first separtion
            if k[1]== '0':#2nd separation
                if k[2]=='0':
                    if k[3]=='0':
                        answer.append('a')
                    elif k[3] == '1':
                        answer.append('b')
                elif k[2]=='1':
                    if k[3]=='0':
                        answer.append('c')
                    elif k[3] == '1':
                        answer.append('d')
            elif k[1]== '1':
                if k[2]=='0':
                    if k[3]=='0':
                        answer.append('e')
                    elif k[3] == '1':
                        answer.append('f')
                elif k[2]=='1':
                    if k[3]=='0':
                        answer.append('g')
                    elif k[3] == '1':
                        answer.append('h')
        if k[0] == '1':# first separtion
            if k[1]== '0':#2nd separation
                if k[2]=='0':
                    if k[3]=='0':
                        answer.append('i')
                    elif k[3] == '1':
                        answer.append('j')
                elif k[2]=='1':
                    if k[3]=='0':
                        answer.append('k')
                    elif k[3] == '1':
                        answer.append('l')
            elif k[1]== '1':
                if k[2]=='0':
                    if k[3]=='0':
                        answer.append('m')
                    elif k[3] == '1':
                        answer.append('n')
                elif k[2]=='1':
                    if k[3]=='0':
                        answer.append('o')
                    elif k[3] == '1':
                        answer.append('p')        
    for l in answer:
        print(l,end="")
    print()
    answer=[]