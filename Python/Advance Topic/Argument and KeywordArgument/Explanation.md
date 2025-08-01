# 🧠 Python Function Arguments Explained

In Python, **arguments** are values you pass to a function when you call it. They provide input for the function to work with.

---

## ✅ 1. Positional Arguments

Positional arguments are assigned to parameters based on their position (order).

```python
def greet(name, age):
    print(f"Hello, my name is {name} and I am {age} years old.")

greet("Durjoy", 22)  # "Durjoy" → name, 22 → age
```
> **Note:** You must pass them in the correct order.

---

## ✅ 2. Keyword Arguments

Keyword arguments use parameter names, so order doesn't matter.

```python
def greet(name, age):
    print(f"Hello, my name is {name} and I am {age} years old.")

greet(age=22, name="Durjoy")  # Order doesn't matter
```
> Makes code more readable and reduces mistakes with long parameter lists.

---

## 🔀 Mixing Positional and Keyword Arguments

You can mix both, but **positional arguments must come first**.

```python
def student_info(name, roll, dept):
    print(f"{name} ({roll}) - {dept}")

student_info("Ayesha", roll=102, dept="CSE")  # OK
# student_info(roll=102, "Ayesha", dept="CSE") ❌ Error
```

---

## 📚 Real-Life Example: Creating a User Account

```python
def create_account(username, password, is_admin=False):
    if is_admin:
        print(f"Admin account created for {username}.")
    else:
        print(f"User account created for {username}.")

# Positional arguments
create_account("durjoy123", "securepass")

# Keyword arguments
create_account(username="admin_durjoy", password="adminpass", is_admin=True)
```

---

## ✅ Why Use Keyword Arguments?

| Use Case                | Why Use Keyword Arguments?                |
|-------------------------|-------------------------------------------|
| Long functions          | Easy to see which value is for which param|
| Optional/default params | Explicitly set only needed parameters     |
| Avoiding order mistakes | Safer with many parameters                |

---

## 📌 Summary Table

| Type           | Syntax                        | Notes                       |
|----------------|------------------------------|-----------------------------|
| Positional Arg | `func("Durjoy", 22)`         | Order matters               |
| Keyword Arg    | `func(name="Durjoy", age=22)`| Order doesn't matter        |
| Mixed          | `func("Durjoy", age=22)`     | Positional must come first  |

---

# ⭐ Using *args and **kwargs in Python

*args and **kwargs let you write flexible functions that accept variable numbers of arguments.

---

## 🔹 *args – Non-Keyword Variable Arguments

*args lets you pass any number of positional arguments. Inside the function, `args` is a tuple.

```python
def add_numbers(*args):
    total = sum(args)
    print(f"Total: {total}")

add_numbers(10, 20, 30)  # Output: Total: 60
add_numbers(1, 2)        # Output: Total: 3
```
> Use when you don’t know how many arguments will be passed.

---

## 🔹 **kwargs – Keyword Variable Arguments

**kwargs lets you pass any number of keyword arguments. Inside the function, `kwargs` is a dictionary.

```python
def user_profile(**kwargs):
    for key, value in kwargs.items():
        print(f"{key.capitalize()}: {value}")

user_profile(name="Durjoy", age=22, department="CSE")
```
> Use when you want to accept flexible keyword arguments.

---

## 🔀 *args and **kwargs Together

You can use both in one function. **Order matters**: positional, *args, keyword, **kwargs.

```python
def order_food(item, *addons, **options):
    print(f"Main Item: {item}")
    print("Add-ons:", addons)
    print("Options:", options)

order_food("Pizza", "Cheese", "Olives", size="Large", spicy=True)
# Output:
# Main Item: Pizza
# Add-ons: ('Cheese', 'Olives')
# Options: {'size': 'Large', 'spicy': True}
```

---

## ⚠️ When to Use

| Use Case                        | Use         |
|----------------------------------|-------------|
| Flexible number of positional    | `*args`     |
| Flexible number of named         | `**kwargs`  |
| Combining both                   | `*args, **kwargs` |
| Writing wrappers/decorators      | Essential   |

---

## 📦 Real-Life Use Case

```python
def create_user(username, *skills, **details):
    print(f"Username: {username}")
    print(f"Skills: {', '.join(skills)}")
    for key, value in details.items():
        print(f"{key.capitalize()}: {value}")

create_user(
    "durjoy",
    "Python", "Django", "React",
    age=22,
    location="Dhaka",
    verified=True
)
```

---

> **Summary:**  
> - Use positional arguments for simple, ordered input.  
> - Use keyword arguments for clarity and flexibility.  
> - Use *args and **kwargs for functions that need to accept many or unknown arguments.

