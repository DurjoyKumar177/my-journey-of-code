print('This code is written for Fiend all ODD and Even number from 1 to your given Number: ')
N=int(input('Number= '))

print('Even Number between 1 to ',N ,'is= ')
for i in range(1,N):
    if i%2==0:
        print(i)

print('Odd Number between 1 to ',N,'is = ')
for i in range(1,N):
    if i%2!=0:
        print(i)
