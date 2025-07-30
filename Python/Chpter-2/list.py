#list,array,collection is same(simple terms)

# List in python is a collection of items that can be of different data types. Lists are mutable, meaning you can change their content after creation.
# List methods are functions that allow you to manipulate and interact with list objects.

# Creating a sample list
my_list = ["hello", 20.85, True, [10, 20, 30],{"Fruit":"apple", "Color":"red", "Taste":"sweet"},(10,20,30)]  # List of different data types
print("Sample List:", my_list)
# ✅ Accessing elements using index
print("First Element:", my_list[0])  # Accessing first element
print("Last Element:", my_list[-1])  # Accessing last element using negative index

# Indexing in list
# List indexing starts from 0 (first element) to n-1 (last element)
# Negative indexing starts from -1 (last element) to -n (first element)

print("\nList Indexing:")
print("4th Element:", my_list[3])  # 4th element

numbers=[45,56,12,89,87,32,47,45,23]
#indes =0   1  2   3 4   5  6  7  8
#reversind=-9  -8  -7  -6  -5  -4  -3  -2  -1

print(numbers[3], numbers[-3])

#list (start: end)
print(numbers[2:6])

#list(start:end:step)
print(numbers[0:6:2])
print(numbers[6:3:-1])#going reverse
print(numbers[:])#take all
print(numbers[::-1])#short cut to reverse

"""
    Output:
    Sample List: ['hello', 20.85, True, [10, 20, 30], {'Fruit': 'apple', 'Color': 'red', 'Taste': 'sweet'}, (10, 20, 30)]
First Element: hello
Last Element: (10, 20, 30)

List Indexing:
4th Element: [10, 20, 30]
89 47
[12, 89, 87, 32]
[45, 12, 87]
[47, 32, 87]
[45, 56, 12, 89, 87, 32, 47, 45, 23]
[23, 45, 47, 32, 87, 89, 12, 56, 45]

summary:
- Lists can contain mixed data types.
- Lists are ordered collections, meaning the order of elements is preserved.
- Lists are mutable, allowing for changes to their content.
- Lists can be nested, meaning you can have lists within lists.
- Lists support various built-in methods for manipulation and analysis.
    """

