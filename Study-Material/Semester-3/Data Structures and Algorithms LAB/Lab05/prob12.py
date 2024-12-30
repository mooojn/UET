def process_integers(int_list):
    filtered_list = [num for num in int_list if num >= 0]

    if filtered_list:  
        max_value = max(filtered_list)
        min_value = min(filtered_list)
    else:
        max_value = min_value = None  

    if filtered_list:  
        average = sum(filtered_list) / len(filtered_list)
    else:
        average = None  
    return filtered_list, max_value, min_value, average

integers = [12, -7, 5, 64, -2, 34, -10, 0]
filtered_list, max_value, min_value, average = process_integers(integers)
print("Filtered list (negative numbers removed):", filtered_list)
print("Maximum value:", max_value)
print("Minimum value:", min_value)
print("Average value:", average)
