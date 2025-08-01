# 

# Function to book flight tickets
def book_ticket(name, age, seat_type="Economy", meal="Standard"):
    """
    Book a flight ticket for a passenger.
    
    Arguments:
    name -- passenger's name (positional argument)
    age -- passenger's age (positional argument)
    
    Keyword Arguments:
    seat_type -- optional, defaults to 'Economy'
    meal -- optional, defaults to 'Standard'
    """
    print(f"Passenger Name: {name}")
    print(f"Age: {age}")
    print(f"Seat Type: {seat_type}")
    print(f"Meal Preference: {meal}")
    print("✔ Ticket booked successfully!\n")

# ✅ Booking with only required arguments (Positional)
book_ticket("Durjoy", 22)

# ✅ Booking with all customizations (Keyword Arguments)
book_ticket(name="Farhan", age=30, seat_type="Business", meal="Vegetarian")

# ✅ Mixed usage (Positional + Keyword)
book_ticket("Sarah", age=27, meal="Vegan")
