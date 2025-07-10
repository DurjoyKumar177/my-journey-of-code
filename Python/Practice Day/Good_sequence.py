n = int(input())

# Sequence=[]

# for i in range(n):
#     Sequence.append(int(input()))

Sequence = list(map(int, input().split()))

num_frequency = {}

for num in Sequence:
    if num in num_frequency:
        num_frequency[num] += 1
    else:
        num_frequency[num] = 1

remove_count = 0

for number, count in num_frequency.items():
    if count > number:
        remove_count += count - number
    elif count<number:
        remove_count += count

print(remove_count)
