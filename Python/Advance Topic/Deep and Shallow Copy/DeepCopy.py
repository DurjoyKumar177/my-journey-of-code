# A deep copy creates a new object and recursively copies all nested objects.
# The copy is completely independent of the original.

import copy

original = {"name": "Alice", "scores": [90, 85]}
deep = copy.deepcopy(original)

deep["scores"][0] = 60

print("Original:", original)
print("Deep:", deep)

# Output:
# Original: {'name': 'Alice', 'scores': [90, 85]}
# Deep: {'name': 'Alice', 'scores': [60, 85]}

# deepcopy duplicates everything, so changes in 'deep' do not affect 'original'.
