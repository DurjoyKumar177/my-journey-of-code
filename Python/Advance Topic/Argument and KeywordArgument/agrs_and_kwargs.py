
# *args: accepts any number of positional arguments
def add_numbers(*args):
    """
    Adds all the numbers passed as positional arguments.
    """
    total = 0
    for number in args:
        total += number
    print(f"Sum = {total}")

# Calling the function with multiple positional arguments
add_numbers(10, 20, 30)   # Output: Sum = 60
add_numbers(1, 2, 3, 4, 5)  # Output: Sum = 15

# --------------------------------------------

# **kwargs: accepts any number of keyword arguments
def print_profile(**kwargs):
    """
    Prints the profile details passed as keyword arguments.
    """
    for key, value in kwargs.items():
        print(f"{key}: {value}")
    print("Profile Printed ✅\n")

# Calling the function with keyword arguments
print_profile(name="Durjoy", age=22, country="Bangladesh")

print_profile(username="coder123", skills="Python, Django", experience="2 years")
