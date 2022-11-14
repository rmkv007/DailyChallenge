'''
    Question:
        The program must accept the binary representation X as the input.
        The program must print the binary representation of next decimal
        equivalent of X as the output.
    Sample Input & Output:
        Input:
            101
        Output:
            110
'''
str1=input()
k=list(str1)
str2=[]
for e in k:
    if e not in str2:
        str2.append(e)
k2=[]
for i in range(0,len(str2)):
    c=0
    for j in range(0,len(k)):
        if(str2[i]==k[j]):
            c=c+1
    k2.append(c)        
c1=0    
c2=0
for i in range(0,len(k2)):
    if(k2[i]==1):
        print("No")
        break
    else:
        for j in range(2,k2[i]):
            if(k2[i]%j==0):
                c1=c1+c1
                break
    if(c1==1):
        print("No")
        break;
    else:
        c2=c2+1
        c1=0
if(c2==len(k2)):
    print("Yes")
