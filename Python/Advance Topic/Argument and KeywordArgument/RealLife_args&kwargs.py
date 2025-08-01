# You are building a restaurant ordering system. You need a function called take_order() that:

# Can accept any number of food items (since a customer might order multiple dishes).

# Can also accept optional details like table number, special instructions, or waiter’s name.

def take_order(*items, **details):
    """
    Takes a restaurant order with any number of food items (*args)
    and optional details like table number, waiter, or special instructions (**kwargs).
    """
    print("🍽️ Order Summary:")
    
    # Print food items (positional arguments)
    if items:
        print("Items ordered:")
        for item in items:
            print(f" - {item}")
    else:
        print("No items ordered!")

    # Print optional details (keyword arguments)
    if details:
        print("\nExtra Details:")
        for key, value in details.items():
            print(f"{key.capitalize()}: {value}")
    
    print("✅ Order has been placed!\n")

# 👨‍🍳 Example 1: Only food items
take_order("Pizza", "Pasta", "Lemonade")

# 👨‍🍳 Example 2: Food items with additional order details
take_order("Burger", "Fries", table=5, waiter="John", note="Extra ketchup")

# 👨‍🍳 Example 3: No items, just notes (maybe pre-order info)
take_order(note="Birthday table setup", table=2)


# 🍽️ Order Summary:
# Items ordered:
#  - Pizza
#  - Pasta
#  - Lemonade
# ✅ Order has been placed!

# 🍽️ Order Summary:
# Items ordered:
#  - Burger
#  - Fries

# Extra Details:
# Table: 5
# Waiter: John
# Note: Extra ketchup
# ✅ Order has been placed!

# 🍽️ Order Summary:
# No items ordered!

# Extra Details:
# Note: Birthday table setup
# Table: 2
# ✅ Order has been placed!
