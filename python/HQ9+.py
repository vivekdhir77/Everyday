#https://codeforces.com/problemset/problem/133/A

s = str(input())
x = "T"
for i in s:
    if i == 'H':
        x= "F"
    elif i == 'Q':
        x= "F"
    elif i == '9':
        x= "F"
if x == "F":
    print("YES")
elif x == "T":
    print("NO")