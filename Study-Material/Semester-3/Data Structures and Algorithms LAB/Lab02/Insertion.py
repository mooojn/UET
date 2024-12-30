import csv, time, funcs, save_in_csv

def InsertionSort(array, start, end):
    for i in range(start + 1, end + 1):
        key = array[i]
        j = i - 1
        while j >= start and key < array[j]:
            array[j + 1] = array[j]
            j -= 1
        array[j + 1] = key
    return array

def main():
    start_time = time.time()
    size = 30000
    Arr = funcs.RandomArray(size)
    sort_arr = InsertionSort(Arr, 0, size-1)
    end_time = time.time()
    runtime = end_time - start_time
    print("Runtime of insertion sort for size of arr", size, "is", runtime, "seconds")
    save_in_csv.sorted_array("SortedInsertionSort.csv", sort_arr)

    
if __name__ == "__main__":
    main()