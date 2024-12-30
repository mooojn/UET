# Initializing an empty list
my_list = []
# Adding elements to the list
my_list.append(10)
my_list.append(20)
my_list.append(30)
my_list.append(40)
# Displaying elements of the list
print("List elements : " , my_list)
# Python doesn ’t expose capacity , but we can check the length
print("Size : " , len(my_list ))
# Adding one more element to demonstrate dynamic resizing
my_list.append(50)
print("After adding one more element : ")
print("List elements : " , my_list)
print("Size : " , len(my_list))
