# A function that accepts both positional and keyword arguments
def student_info(name, age, department="CSE"):
    # 'name' and 'age' must be passed positionally or with keywords
    # 'department' has a default value, so it's optional to pass
    print(f"Name: {name}")
    print(f"Age: {age}")
    print(f"Department: {department}")

# ✅ Positional Arguments
student_info("Durjoy", 22)
# Output:
# Name: Durjoy
# Age: 22
# Department: CSE

print("----------")

# ✅ Keyword Arguments
student_info(name="Durjoy", age=22, department="EEE")
# Output:
# Name: Durjoy
# Age: 22
# Department: EEE

print("----------")

# ✅ Mixed: Positional + Keyword Argument
student_info("Durjoy", age=22)
# Output:
# Name: Durjoy
# Age: 22
# Department: CSE
