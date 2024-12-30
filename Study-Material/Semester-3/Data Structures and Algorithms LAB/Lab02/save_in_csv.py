import csv

def sorted_array(file_name, sorted_array):
    with open(file_name, 'w', newline='\n') as f:
        writer = csv.writer(f)
        for el in sorted_array:
            writer.writerow([el])