students = ["Moon", "Meera", "Saliq", "Ahmed", "Sher", "Sheri"]

def search_student(name):
    if name in students:
        index = students.index(name)
        print(f"{name} found at index: {index}")
    else:
        print(f"{name} is not present in the list.")
    
name_to_search = input("Enter the name of the student to search: ")
search_student(name_to_search)
