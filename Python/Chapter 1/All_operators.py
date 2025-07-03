# Taking input from the user
a = int(input('a = '))
b = int(input('b = '))

# Arithmetic Operators
print("Arithmetic Operators:")
print(f" Addition: {a} + {b} = {a + b}")      # Addition
print(f" Subtraction: {a} - {b} = {a - b}")      # Subtraction
print(f" Multiplication: {a} * {b} = {a * b}")      # Multiplication
print(f" Division: {a} / {b} = {a / b}")      # Division
print(f" Modulus: {a} % {b} = {a % b}")      # Modulus
print(f" Exponentiation: {a} ** {b} = {a ** b}")    # Exponentiation
print(f" Floor Division: {a} // {b} = {a // b}")    # Floor Division

# Comparison Operators
print("\nComparison Operators:")
print(f" Equal to: {a} == {b} : {a == b}")    # Equal to
print(f" Not equal to: {a} != {b} : {a != b}")    # Not equal to
print(f" Greater than: {a} > {b} : {a > b}")      # Greater than
print(f" Less than: {a} < {b} : {a < b}")      # Less than
print(f" Greater than or equal to: {a} >= {b} : {a >= b}")    # Greater than or equal to
print(f" Less than or equal to: {a} <= {b} : {a <= b}")    # Less than or equal to

# Logical Operators
print("\nLogical Operators:")
print(f" And: {a} > 0 and {b} > 0 : {a > 0 and b > 0}")
print(f" Or: {a} > 0 or {b} > 0 : {a > 0 or b > 0}")
print(f" Not: not({a} > 0) : {not(a > 0)}")

# Assignment Operators
print("\nAssignment Operators:")
x = a
x += b
print(f"x += b : {x}")
x -= b
print(f"x -= b : {x}")
x *= b
print(f"x *= b : {x}")
x /= b
print(f"x /= b : {x}")
x %= b
print(f"x %= b : {x}")
x **= b
print(f"x **= b : {x}")
x //= b
print(f"x //= b : {x}")

# Bitwise Operators
print("\nBitwise Operators:")
print(f"{a} & {b} = {a & b}")      # AND
print(f"{a} | {b} = {a | b}")      # OR
print(f"{a} ^ {b} = {a ^ b}")      # XOR
print(f"~{a} = {~a}")              # NOT
print(f"{a} << 1 = {a << 1}")      # Left Shift
print(f"{a} >> 1 = {a >> 1}")      # Right Shift
