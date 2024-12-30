students = []

def add_student(name):
    students.append(name)
    print(f"{name} has been added to the class.")

def remove_student(name):
    if name in students:
        students.remove(name)
        print(f"{name} has been removed from the class.")
    else:
        print(f"{name} is not in the class.")
        
def display_students():
    if students:
        print("List of students in the class:")
        for student in students:
            print(f"- {student}")
    else:
        print("The class has no students.")

def menu():
    print("\n1. Add a student")
    print("2. Remove a student")
    print("3. Display the list of students")
    print("4. Exit")
    
    choice = input("Enter your choice (1-4): ")
    return choice

while True:
    choice = menu()
    if choice == '1':
        name = input("Enter the student's name: ")
        add_student(name)
    elif choice == '2':
        name = input("Enter the student's name to remove: ")
        remove_student(name)
    elif choice == '3':
        display_students()
    elif choice == '4':
        print("Exiting program.")
        break
    else:
        print("Invalid choice, please try again.")
