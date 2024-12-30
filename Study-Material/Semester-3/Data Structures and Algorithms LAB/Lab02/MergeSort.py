import funcs, save_in_csv, time

def MergeSort(array, start, end):
    if start < end:
        mid = (start + end) // 2
        MergeSort(array, start, mid)
        MergeSort(array, mid+1, end)
        
        Merge(array, start, mid, end)
    return array

def Merge(array, p, q, r):
    leftArrSize = q - p + 1  
    rightArrSize = r - q      

    left = [0] * leftArrSize
    right = [0] * rightArrSize

    for i in range(0, leftArrSize):
        left[i] = array[p+i]   
    for j in range(0, rightArrSize):
        right[j] = array[q+1+j]

    i = j = 0
    k = p
    while i < leftArrSize and j < rightArrSize:
        if left[i] <= right[j]:
            array[k] = left[i]  
            i += 1
        else:
            array[k] = right[j]  
            j += 1
        k += 1
    while i < leftArrSize:
        array[k] = left[i]
        i += 1
        k += 1
    while j < rightArrSize:
        array[k] = right[j]
        j += 1
        k += 1

def main():
    start_time = time.time()
    size = 30000
    Arr = funcs.RandomArray(size)
    sort_arr = MergeSort(Arr, 0, size-1)
    end_time = time.time()
    runtime = end_time - start_time
    print("Runtime of merge sort for size of arr", size, "is", runtime, "seconds")
    save_in_csv.sorted_array("MergeSort.csv", sort_arr)

if __name__ == "__main__":
    main()