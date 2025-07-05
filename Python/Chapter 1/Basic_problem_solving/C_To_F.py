#Celcious to Farenhite conversion
print("A == C -> F Conversion.")
print("B == F -> C Conversion.")
Scale= input("Enter Conversion(A or B): ")
if Scale=='A':
    c = int(input("Enter Celcious Temperature= "))
    try:
        if c < -273.15:
            raise ValueError("Temperature cannot be below absolute zero (-273.15 C).")
    except ValueError as e:
        print(e)
    else:
        f = (c * 9/5) + 32
        print(f"{c} degree Celcious = {f} degree Farenhite.")

elif Scale=='B':
    f = int(input("Enter Farenhite Temperature= "))
    try:
        if f < -459.67:
            raise ValueError("Temperature cannot be below absolute Zero (-459.67 F).")
    except ValueError as e:
        print(e)
    else:
        c= (f - 32) * 5/9
        print(f"{f} degree Farenhite = {c} degree Celcious.")