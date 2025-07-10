n = int(input())
numbers = list(map(int, input().split()))

cunt = 0

while all(num % 2 == 0 for num in numbers): #cheack all element are even or not
    numbers = [num // 2 for num in numbers] # for is used for iterator or number generator
    cunt += 1

print(cunt)
