import funcs, time, save_in_csv

def SelectionSort(array, start, end):
    for i in range(start, end-1):
        minIndex = i
        for j in range(i+1, end-1):
            if (array[j]<array[minIndex]):
                minIndex = j
        array[minIndex], array[i] = array[i], array[minIndex]
    return array

# start_time = time.time()
# size = 30000
# Arr = funcs.RandomArray(size)
# sort_arr = SelectionSort(Arr, 0, size-1)
# end_time = time.time()
# runtime = end_time - start_time
# print("Runtime of selection sort for size of arr", size, "is", runtime, "seconds")
# save_in_csv.sorted_array("SelectionSort.csv", sort_arr)