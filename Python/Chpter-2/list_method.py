# What is List Method in Python?
# answer: List methods in Python are built-in functions that allow you to manipulate and interact with list objects. They provide a way to perform various operations on lists, such as adding, removing, or modifying elements.

# Creating a sample list
my_list = [10, 20, 30, 40, 50]

# 1. append(): Adds an element at the end
my_list.append(60)  # [10, 20, 30, 40, 50, 60]

# 2. insert(index, value): Inserts an element at the given index
my_list.insert(2, 25)  # [10, 20, 25, 30, 40, 50, 60]

# 3. extend(): Adds all elements from another iterable (like list) to the end
my_list.extend([70, 80])  # [10, 20, 25, 30, 40, 50, 60, 70, 80]

# 4. remove(value): Removes the first matching value
my_list.remove(25)  # [10, 20, 30, 40, 50, 60, 70, 80]

# 5. pop(): Removes and returns the last item
last_item = my_list.pop()  # last_item = 80, my_list = [10, 20, 30, 40, 50, 60, 70]

# 6. pop(index): Removes and returns item at given index
second_item = my_list.pop(1)  # second_item = 20, my_list = [10, 30, 40, 50, 60, 70]

# 7. index(value): Returns the index of the first matching value
index_of_50 = my_list.index(50)  # index_of_50 = 3

# 8. count(value): Counts how many times a value appears
count_30 = my_list.count(30)  # count_30 = 1

# 9. sort(): Sorts the list in ascending order (modifies the original list)
my_list.sort()  # [10, 30, 40, 50, 60, 70]

# 10. reverse(): Reverses the list (in-place)
my_list.reverse()  # [70, 60, 50, 40, 30, 10]

# 11. copy(): Creates a shallow copy of the list
copied_list = my_list.copy()  # copied_list = [70, 60, 50, 40, 30, 10]

# 12. clear(): Removes all elements from the list
copied_list.clear()  # copied_list = []

# 13. len(): Returns number of elements in the list
print("Length of list:", len(my_list))  # 6

# 14. max() and min(): Find the largest and smallest elements
print("Max:", max(my_list))  # 70
print("Min:", min(my_list))  # 10

# 15. sum(): Adds up all the numeric elements
print("Sum:", sum(my_list))  # 260

# 16. Membership testing: Check if an item is in the list
print(50 in my_list)    # True
print(100 not in my_list)  # True

# 17. List slicing: Getting parts of the list
print(my_list[1:4])   # [60, 50, 40]
print(my_list[-1])    # 10 (last item using negative indexing)

# 18. List comprehension (creating list using for loop in one line)
squares = [x*x for x in range(1, 6)]  # [1, 4, 9, 16, 25]

# Final list after all operations
print("Final my_list:", my_list)
print("Squares:", squares)


"""output = 
Length of list: 6
Max: 70
Min: 10
Sum: 260
True
True
[60, 50, 40]
10
Final my_list: [70, 60, 50, 40, 30, 10]
Squares: [1, 4, 9, 16, 25]"""