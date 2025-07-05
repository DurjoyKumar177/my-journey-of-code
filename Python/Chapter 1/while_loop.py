n=int(input('n= '))
i=1
while i<n:
    i+=1
    if(i==8):
        break
    
    if(i==5 or i==6):
        continue
    print(i)
    

print('Loop End')