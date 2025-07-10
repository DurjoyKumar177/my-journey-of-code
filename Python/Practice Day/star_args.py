def sum_numbers(*args):
    total = 0
    for num in args:
        total += num
    return total

# Test the function with different numbers of arguments
print(sum_numbers(1, 2, 3))         # Output: 6
print(sum_numbers(10, 20, 30, 40))  # Output: 100
print(sum_numbers(7))               # Output: 7
print(sum_numbers())                # Output: 0
