n=10

#Break Statement
print("Break Statement: ")
for i in range(n+1):
    if i==5:
        break #stop printing after 4
    print(i)

print("\n\nContinue Statement: ")    
#Continue Statement:
for i in range(n):
    if i==5:
        continue
    print(i)    
    