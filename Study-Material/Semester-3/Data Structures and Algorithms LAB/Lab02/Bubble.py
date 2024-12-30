import time, funcs, save_in_csv

def BubbleSort(array,start, end):
    for i in range(start, end):
        for j in range(start, end-i-1):
            if array[j] > array[j+1]:
                array[j], array[j+1] = array[j+1], array[j]
    return array


def main():
    start_time = time.time()
    size = 30000
    Arr = funcs.RandomArray(size)
    sort_arr = BubbleSort(Arr, 0, size-1)
    end_time = time.time()
    runtime = end_time - start_time
    print("Runtime of bubble sort for size of arr", size, "is", runtime, "seconds")
    save_in_csv.sorted_array("BubbleSort.csv", sort_arr)


if __name__ == "__main__":
    main()