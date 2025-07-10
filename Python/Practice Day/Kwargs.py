def greet(**kwargs):
    
    for key, value in kwargs.items():
        print(f"{key} = {value}")

greet(name="Alice", age=30, city="Wonderland")

#Output:
        #name = Alice
        # age = 30
        # city = Wonderland
