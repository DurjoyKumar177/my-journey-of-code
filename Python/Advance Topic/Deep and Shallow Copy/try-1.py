import copy

lst=[1,(10,11,12),3]

shallow_copy = copy.copy(lst)

temp = list(shallow_copy[1])
temp[1] = 222
shallow_copy[1] = tuple(temp)
print("Original:", lst)
print("Shallow Copy:", shallow_copy)