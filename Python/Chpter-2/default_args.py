def exmp1(num1,num2,num3,num4=0):
    sum=num1+num2+num3+num4
    print(sum)
    
#exmp1(12,34,212,34,12) #if we gives more value it gives error
exmp1(12,23,34,54) #54 is optional here we can give only 3 value hare
exmp1(23,534,12)
#exmp1(22,34)#we can't give less value

def exmp2(*number):
    print(number)

exmp2(12,23,34,12)# gives any amount of number

def exmp3(num,num2,*number): # at list 2 number needed to run this function
    sum=0
    for num in number:
        sum+=num
        
    return sum

all_sum=exmp3(12,23,34,45,23)
print(all_sum)