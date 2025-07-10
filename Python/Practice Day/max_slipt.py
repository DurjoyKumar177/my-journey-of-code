String=str(input())

Lcount=0
Rcount=0
Ans=[]
cur=0

for i,char in enumerate(String):
    if(char=='L'):
        Lcount+=1
    else:
        Rcount+=1
    if(Lcount==Rcount):
        Lcount=0
        Rcount=0
        Ans.append(String[cur:i+1])
        cur=i+1
        
print(len(Ans))
for i in Ans:
    print(i)