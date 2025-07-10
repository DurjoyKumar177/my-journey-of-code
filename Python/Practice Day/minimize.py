n = int(input())
numbers = list(map(int, input().split())) #take list with space separated

count = 0

while True:
    # Check is all numbers are even
    all_even = True
    for num in numbers:
        if num % 2 != 0:
            all_even = False
            break  # Exit if any number is odd
        
    if  all_even==False:
        break  
    
    for i in range(n):
        numbers[i] //= 2
    count += 1

print(count)
