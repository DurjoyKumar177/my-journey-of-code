# 🧠 Deep Copy vs Shallow Copy in Python

Copying objects in Python can be tricky, especially with nested or mutable data structures. There are two main ways to copy objects: **shallow copy** and **deep copy**. Understanding the difference is crucial to avoid unexpected bugs.

---

## 📌 Shallow Copy

A **shallow copy** creates a new object, but **does not recursively copy nested objects**. Instead, it copies references to the nested objects. This means changes to nested data in the copy will affect the original.

### Example

```python
import copy

original = {"name": "Alice", "scores": [90, 85]}
shallow = copy.copy(original)

shallow["scores"][0] = 60

print("Original:", original)
print("Shallow:", shallow)
```

**Output:**
```
Original: {'name': 'Alice', 'scores': [60, 85]}
Shallow: {'name': 'Alice', 'scores': [60, 85]}
```

> Both `original` and `shallow` share the same `scores` list, so changes in one affect the other.

---

## 📌 Deep Copy

A **deep copy** creates a new object **and recursively copies all nested objects**. The copy is completely independent of the original.

### Example

```python
import copy

original = {"name": "Alice", "scores": [90, 85]}
deep = copy.deepcopy(original)

deep["scores"][0] = 60

print("Original:", original)
print("Deep:", deep)
```

**Output:**
```
Original: {'name': 'Alice', 'scores': [90, 85]}
Deep: {'name': 'Alice', 'scores': [60, 85]}
```

> `deepcopy` duplicates everything, so changes in `deep` do **not** affect `original`.

---

## 🔁 When to Use Which?

- **Shallow copy**: Use when your object is flat (no nested mutable objects).
- **Deep copy**: Use when your object contains nested or mutable elements that need to be independent.

---

## 🔍 Comparison Table

| Feature                      | Shallow Copy (`copy.copy`)         | Deep Copy (`copy.deepcopy`)         |
|------------------------------|------------------------------------|-------------------------------------|
| Copies top-level object      | ✅                                 | ✅                                  |
| Copies nested objects        | ❌ (references only)               | ✅ (fully independent)              |
| Independent from original?   | ❌ (nested changes affect both)    | ✅ (completely independent)         |
| Performance                  | Faster                             | Slightly slower                    |
| Use case                     | Simple, non-nested structures      | Complex, deeply nested structures   |

---

## 🧠 Real-Life Scenario

Imagine a drawing app where each drawing state is saved in history. To ensure each saved state remains independent, use a **deep copy**:

```python
import copy

canvas = {"shapes": ["circle"]}
history = []

# Save snapshot
history.append(copy.deepcopy(canvas))

canvas["shapes"].append("square")

# Undo to initial state
print("History:", history[0])  # {'shapes': ['circle']}
print("Current:", canvas)      # {'shapes': ['circle', 'square']}
```

---

## ✅ Summary

- Use `copy.copy()` for **shallow copies** (top-level only).
- Use `copy.deepcopy()` for **deep copies** (full, independent copies).
- Always `import copy` to access these functions.

> Choose the right copy method to avoid unexpected side effects in your Python programs!