import time
import csv
import funcs 
from Insertion import InsertionSort
from MergeSort import MergeSort
from HybridMerge import HybridMergeSort
from Selection import SelectionSort
from Bubble import BubbleSort

def read_n_values(filename):
    with open(filename, 'r') as file:
        n_values = [int(line.strip()) for line in file]
    return n_values

def write_to_csv(filename, row):
    file_exists = False
    try:
        with open(filename, 'r') as file:
            file_exists = True
    except FileNotFoundError:
        pass

    with open(filename, 'a', newline='') as file:
        writer = csv.writer(file)
        if not file_exists:
            writer.writerow(['n', 'InsertionSortTime(s)', 'MergeSortTime(s)', 'HybridMergeSortTime(s)', 'SelectionSortTime(s)', 'BubbleSortTime(s)'])
        writer.writerow(row)

n_values = read_n_values('Nvalues.txt')

for n in n_values:
    array = funcs.RandomArray(n)
    array_copy = array.copy()
    start_time = time.time()
    InsertionSort(array_copy, 0, n - 1)
    insertion_sort_time = time.time() - start_time
    
    array_copy = array.copy() 
    start_time = time.time()
    MergeSort(array_copy, 0, n - 1)
    merge_sort_time = time.time() - start_time
    
    array_copy = array.copy()
    start_time = time.time()
    HybridMergeSort(array_copy, 0, n - 1)
    hybrid_merge_sort_time = time.time() - start_time
    
    array_copy = array.copy()
    start_time = time.time()
    SelectionSort(array_copy, 0, n - 1)
    selection_sort_time = time.time() - start_time
    
    array_copy = array.copy()
    start_time = time.time()
    BubbleSort(array_copy, 0, n - 1)
    bubble_sort_time = time.time() - start_time
    row = [n, insertion_sort_time, merge_sort_time, hybrid_merge_sort_time, selection_sort_time, bubble_sort_time]
    write_to_csv('RunTime.csv', row)
    
    print(f'n={n}, InsertionSort Time={insertion_sort_time}s, MergeSort Time={merge_sort_time}s, '
          f'HybridMergeSort Time ={hybrid_merge_sort_time}s, SelectionSort Time={selection_sort_time}s, '
          f'BubbleSort Time={bubble_sort_time}s')
