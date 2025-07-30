# 🔍 What is a dictionary?
# A dictionary stores data in key-value pairs.
# Syntax: my_dict = {key1: value1, key2: value2}

# 📌 Why use dictionaries?
# - Fast lookup using keys (like names, IDs)
# - Organize data like real-world objects (e.g., student records, contacts)
# - More readable than lists for structured data

# 🎯 Real-life Example: Storing a student's information
student = {
    "name": "Durjoy Kumar",
    "id": 101,
    "age": 22,
    "department": "CSE",
    "courses": ["Math", "Physics", "Programming"],  # List
    "marks": {
        "Math": 85,
        "Physics": 90,
        "Programming": 95
    } # Nested dictionary
}

# ✅ Accessing values using keys
print("Name:", student["name"])
print("Department:", student["department"])

# ✅ Adding new key-value pair
student["email"] = "durjoy@example.com"

# ✅ Updating existing value
student["age"] = 23

# ✅ Removing a key-value pair
del student["id"]

# ✅ Check if a key exists
if "email" in student:
    print("Email is present.")

# ✅ Looping through dictionary
print("\n-- Student Info --")
for key, value in student.items():
    print(key, ":", value)

# ✅ Get only keys
print("\nAll Keys:", student.keys())

# ✅ Get only values
print("All Values:", student.values())

# ✅ Get value safely using get()
# If key doesn't exist, returns None (instead of error)
print("CGPA:", student.get("cgpa"))  # None

# ✅ Nested Dictionary Access
print("Programming Marks:", student["marks"]["Programming"])

# ✅ Copying a dictionary
student_copy = student.copy()

# ✅ Clearing all items from dictionary
# student.clear()  # Uncomment to empty the dictionary

# ✅ Creating dictionary using dict()
person = dict(name="Alice", age=25)
print("\nPerson:", person)
