n = int(input())
for i in range(n + 1):
    if i % 2 == 0: #the white space is called indentation, which is used to define the scope of the loop
        print(i) # Print even numbers from 0 to n
        
#alternative way to use for loop
for i in range(0, n + 1, 2):
    print(i)

# Loop from 0 to 4 (exclusive of 5)
for i in range(5):
    print(i)

    # Loop from 2 to 7 (exclusive of 8)
for i in range(2, 8):
    print(i)

    # Loop from 0 to 9 with a step of 2
for i in range(0, 10, 2):
    print(i)
    
    
# Loop from 10 to 1 (inclusive) in reverse order
for i in range(10, 0, -1):
    print(i)

#iterating through a list    
fruits = ["apple", "banana", "cherry"]
for fruit in fruits:
    print(fruit)

#iterating through a string    
word = "Python"
for char in word:
    print(char)
    
#Iterating with enumerate() for Index and Value:
colors = ["red", "green", "blue"]
for index, color in enumerate(colors):
    print(f"Index: {index}, Color: {color}")

#Iterating over a Dictionary.
person = {"name": "Alice", "age": 30, "city": "New York"}

# Iterate over keys
for key in person:
    print(key)

# Iterate over values
for value in person.values():
    print(value)

# Iterate over key-value pairs
for key, value in person.items():
    print(f"{key}: {value}")

