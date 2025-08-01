# 🔍 Creating a class to represent a Student
class Student:
    # 👇 This is the constructor method
    def __init__(self, name, student_id, department):
        # These are instance variables (attributes)
        self.name = name              # 'self.name' stores the name of the student
        self.student_id = student_id  # 'self.student_id' stores the student's ID
        self.department = department  # 'self.department' stores department name

        # ✅ This block runs automatically when an object is created
        print(f"Student object created for {self.name}")

    # 📦 A method to display the student's information
    def display_info(self):
        print("Student Name:", self.name)
        print("Student ID:", self.student_id)
        print("Department:", self.department)


# 🎯 Creating objects of the Student class using the constructor
student1 = Student("Durjoy Kumar", 101, "CSE")
student2 = Student("Ayesha Rahman", 102, "EEE")

# 📞 Calling method to display info
print("\n--- Student 1 Info ---")
student1.display_info()

print("\n--- Student 2 Info ---")
student2.display_info()

# Output:
# Student object created for Durjoy Kumar
# Student object created for Ayesha Rahman

# --- Student 1 Info ---
# Student Name: Durjoy Kumar
# Student ID: 101
# Department: CSE

# --- Student 2 Info ---
# Student Name: Ayesha Rahman
# Student ID: 102
# Department: EEE

# Summery:
# 1.ক্লাসের ভিতরে যেসব ফাংশন থাকে, সেগুলোকে method বলে এবং self আর্গুমেন্ট থাকে।
# 2.self দিয়ে সেই method ক্লাসের ভেতরের attribute ও অন্য method-এ access করতে পারে।
# 3.ক্লাসের বাইরে সাধারণ ফাংশন থাকে, self লাগে না।
# 4.init method-কে constructor বলে, এটি object তৈরি করার সময় নিজে থেকেই (অটোমেটিক) কল হয়, আলাদা করে কল করতে হয় না।