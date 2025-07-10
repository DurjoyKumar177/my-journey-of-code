def min_removals_to_good_sequence(n, a):
    frequency = {}
    
    # Count frequencies of each element
    for num in a:
        if num in frequency:
            frequency[num] += 1
        else:
            frequency[num] = 1
    
    removals = 0
    
    # Calculate the number of removals required
    for x, count in frequency.items():
        if count > x:
            removals += count - x
        else:
            removals += count
    
    return removals

# Example usage
n = int(input())
a = list(map(int, input().split()))
print(min_removals_to_good_sequence(n, a))
