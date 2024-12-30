import time, funcs, save_in_csv
from Insertion import InsertionSort
from MergeSort import Merge

THRESHOLD = 10  

def HybridMergeSort(arr, start, end):
    if end - start + 1 <= THRESHOLD:
        InsertionSort(arr, start, end)
    else:
        if start < end:
            mid = (start + end) // 2
            HybridMergeSort(arr, start, mid)
            HybridMergeSort(arr, mid + 1, end)
            Merge(arr, start, mid, end)

def main():
    start_time = time.time()
    size = 30000
    Arr = funcs.RandomArray(size)
    sort_arr = HybridMergeSort(Arr, 0, size-1)
    end_time = time.time()
    runtime = end_time - start_time
    print("Runtime of hybrid merge sort for size of arr", size, "is", runtime, "seconds")
    save_in_csv.sorted_array("HybridMergeSort.csv", sort_arr)


if __name__ == "__main__":
    main()