#Default argument
def do_sum(num1,num2,num3):
    sum=num1+num2+num3
    return sum
Total=do_sum(12,34,12)
print(Total)

#Optional Argument
def make_sum(num1,num2=0,num3=0,num4=0): #here num2 to num4 are optional
    sum=num1+num2+num3+num4
    print(sum)

make_sum(12,23,34)

#argument parameter
def do_a_lot(num1,num2,*numbers):
    print(numbers)
    sum=0
    for i in numbers:
        print(i)
        sum=sum+i
    Total=num1+num2+sum
    print(Total)
        
do_a_lot(12,23,23,25,34,25,74,34)