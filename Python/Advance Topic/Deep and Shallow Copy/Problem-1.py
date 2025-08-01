# Real-Life Example: School Records
# Imagine you’re copying a school record containing student details and their marks. If you use a shallow copy, both the original and copied records will point to the same list of marks.

import copy

# Original school record
student = {
    "name": "Durjoy",
    "marks": [90, 85, 88]
}

# Shallow copy
shallow = copy.copy(student)

# Deep copy
deep = copy.deepcopy(student)

# Change marks in shallow copy
shallow["marks"][0] = 60

# Change marks in deep copy
deep["marks"][1] = 70

print("Original:", student)   # 👈 will reflect change from shallow copy
print("Shallow:", shallow)   # same reference to marks
print("Deep:", deep)         # separate copy of marks
