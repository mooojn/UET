def bubble(arr):
    n = len(arr)
    for i in range(n):
        for j in range(n-i-1):
            if (arr[j] > arr[j+1]):
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

def selection(arr):
    n = len(arr)
    smallest_idx = -1
    for i in range(n):
        smallest_idx = i
        for j in range(i, n):
            if (arr[j] < arr[smallest_idx]):
                smallest_idx = j
        arr[i], arr[smallest_idx] = arr[smallest_idx], arr[i]
    return arr

def insertion(arr):
    n = len(arr)
    for i in range(1, n):  
        key = arr[i]
        j = i-1
        while j>=0 and key < arr[j]:
            arr[j+1] = arr[j]
            j-=1
        arr[j+1] = key
    return arr

def merge(arr):
    n = len(arr)
    if n <= 1: return arr
    mid = n // 2
    
    left = merge(arr[:mid])
    right = merge(arr[mid:])

    return mergeSort(left, right)

def mergeSort(left, right):
    arr = []
    i = j = 0
    
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            arr.append(left[i])
            i += 1
        else:
            arr.append(right[j])
            j += 1
    for element in left[i:]:
        arr.append(element)

    for element in right[j:]:
        arr.append(element)
    return arr

def count(arr):
    n = len(arr)
    maxel = max(arr)
    countArr = [0 for _ in range(maxel+1)] 
    for i in range(n):
        countArr[arr[i]]+=1

    for i in range(1, len(countArr)):
        countArr[i] += countArr[i-1]
        
    output = [0 for _ in range(n)]
    for i in range(n):
        value = arr[i]
        countArr[value] -= 1
        output[countArr[value]] = value
    return output

def countingSort(arr, exp1):
    n = len(arr)
    output = [0] * (n)
    count = [0] * (10)

    for i in range(0, n):
        index = arr[i] // exp1
        count[index % 10] += 1
    
    for i in range(1, 10):
        count[i] += count[i - 1]

    i = n - 1
    while i >= 0:
        index = arr[i] // exp1
        count[index % 10] -= 1
        output[count[index % 10]] = arr[i]
        i -= 1
    
    return output

def radix(arr):
    maxel = max(arr)
    exp = 1
    while maxel / exp >= 1:
        arr = countingSort(arr, exp)
        exp *= 10

    return arr

def bucket(arr):
    n = len(arr)
    buckets = [[] * n for _ in range(n)]

    for num in arr:
        bi = int(n * num)
        buckets[bi].append(num)

    for bucket in buckets:
        bucket = insertion(bucket)

    index = 0
    for bucket in buckets:
        for num in bucket:
            arr[index] = num
            index += 1
    return arr

def partition(arr, low, high):
    pivot = arr[high]

    i = low - 1
    for j in range(low, high):
        if arr[j] < pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    
    arr[i+1], arr[high] = arr[high], arr[i+1]
    return i + 1

def quickSort(arr, low, high):
    if low < high:
        pi = partition(arr, low, high)
        
        quickSort(arr, low, pi - 1)
        quickSort(arr, pi + 1, high)
    return arr

def heapify(arr, n, i):
    largest = i 
    l = 2 * i + 1 
    r = 2 * i + 2  

    if l < n and arr[l] > arr[largest]:
        largest = l

    if r < n and arr[r] > arr[largest]:
        largest = r

    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]
        heapify(arr, n, largest)


def heap(arr):
    n = len(arr) 

    for i in range(n // 2 - 1, -1, -1):
        heapify(arr, n, i)

    for i in range(n - 1, 0, -1):
        arr[0], arr[i] = arr[i], arr[0] 
        heapify(arr, i, 0)
    
    return arr

def shell_sort(arr):
    n = len(arr)
    gap = n // 2  

    while gap > 0:
        for i in range(gap, n):
            key = arr[i]
            j = i
            while j >= gap and arr[j - gap] > key:
                arr[j] = arr[j - gap]
                j -= gap
            arr[j] = key
        gap //= 2  

    return arr

arr = [2,4,0,3,7,9,1]
# print(bubble(arr))
# print(insertion(arr))
# print(selection(arr))
# print(merge(arr))
# print(count(arr))
# print(radix(arr))
# print(bucket(arr))
# print(heap(arr))


