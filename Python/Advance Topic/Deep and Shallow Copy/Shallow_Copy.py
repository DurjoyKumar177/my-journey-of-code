# A shallow copy creates a new object, but does not recursively copy nested objects.
# Instead, it copies references to the nested objects.
# This means changes to nested data in the copy will affect the original.


import copy

original = {"name": "Alice", "scores": [90, 85]}
shallow = copy.copy(original)

shallow["scores"][0] = 60

print("Original:", original)
print("Shallow:", shallow)

# Output:
# Original: {'name': 'Alice', 'scores': [60, 85]}
# Shallow: {'name': 'Alice', 'scores': [60, 85]}

# Both `original` and `shallow` share the same `scores` list,
# so changes in one affect the other.
