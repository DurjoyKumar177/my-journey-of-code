# 🐍 Python Decorators Explained

## 🔹 What is a Decorator in Python?

A **decorator** in Python is a **function that modifies the behavior of another function** without changing its code. It allows the addition of reusable functionality to functions or methods.

---

## 🧠 Concept Breakdown

- Python treats **functions as first-class objects** (they can be passed around and used as arguments).
- A **decorator** is a **higher-order function**: it takes another function as input, adds some functionality, and returns it.

---

## 🔁 Real-Life Analogy

> Think of a decorator like a **gift wrap**.  
> The gift inside is the real function, and the wrapping adds some extra appeal—without altering the gift itself.

---

## 📊 How Decorator Works (Diagram)

```
 +------------------+
 | Original Function| <--------+
 +--------+---------+          |
          |                    |
          v                    |
 +--------+---------+          |
 |  Decorator        |         |
 |  (takes function) |         |
 +--------+---------+          |
          |                    |
          v                    |
 +--------+---------+          |
 | Wrapped Function  |-------->+-----> Used in Code
 | (adds extra logic)|
 +------------------+

```

## 🧪 Basic Example of a Decorator

```python
# Decorator function
def my_decorator(func):
    def wrapper():
        print("Before function call")
        func()
        print("After function call")
    return wrapper

# Function to decorate
@my_decorator
def say_hello():
    print("Hello!")

# Call the decorated function
say_hello()

```
```py
Output:
Before function call
Hello!
After function call
```

## ✅ Why & When We Use Decorators

| **Use Case**             | **Why**                                           |
|--------------------------|---------------------------------------------------|
| **Logging**              | Track when and how functions are called           |
| **Authentication**       | Check if user is logged in before execution       |
| **Performance Monitoring** | Measure execution time                          |
| **Validation**           | Validate arguments passed to a function           |
| **Caching**              | Store results of expensive computations           |
| **DRY Principle**        | Reuse logic without repeating code                |

---

## 🌟 Advantages of Decorators

- **Code Reusability**: Apply the same logic (e.g., logging, error handling) to many functions.
- **Clean & Readable**: Keeps code modular and easier to understand.
- **Separation of Concerns**: Business logic is separate from "extra" functionalities.
- **Flexible & Powerful**: You can stack decorators or create parameterized ones.

## 🎯 Bonus: Decorator with Arguments
```python
def repeat(times):
    def decorator(func):
        def wrapper(*args, **kwargs):
            for _ in range(times):
                func(*args, **kwargs)
        return wrapper
    return decorator

@repeat(3)
def greet(name):
    print(f"Hello, {name}!")

greet("Durjoy")
```

```py
output:
Hello, Durjoy!
Hello, Durjoy!
Hello, Durjoy!
