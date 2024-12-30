# counting sort
def CountingSort(arr):
    minVal = min(arr)
    maxVal = max(arr)
    elements = maxVal - minVal + 1
    count = [0] * elements
    output = [0] * len(arr)
    for num in arr:
        count[num - minVal] += 1
    for i in range(1, len(count)):
        count[i] += count[i - 1]
    for num in reversed(arr):  
        output[count[num - minVal] - 1] = num
        count[num - minVal] -= 1
    for i in range(len(arr)):
        arr[i] = output[i]
# driver
arr = [-5, -10, 0, -3, 8, 5, -1, 10]
CountingSort(arr)
print(f"Counting Sort: {arr}")

# radix sort
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
        output[count[index % 10] - 1] = arr[i]
        count[index % 10] -= 1
        i -= 1
    i = 0
    for i in range(0, len(arr)):
        arr[i] = output[i]
def RadixSort(arr):
    max1 = max(arr)
    exp = 1
    while max1 / exp >= 1:
        countingSort(arr, exp)
        exp *= 10
# driver
arr = [110, 45, 65,50, 90, 602, 24, 2, 66] 
RadixSort(arr)
print(f"Radix Sort: {arr}")

# bucket sort
def insertionSort(bucket):
    for i in range(1, len(bucket)):
        key = bucket[i]
        j = i - 1
        while j >= 0 and bucket[j] > key:
            bucket[j + 1] = bucket[j]
            j -= 1
        bucket[j + 1] = key
def BucketSort(arr):
    n = len(arr)
    buckets = [[] for _ in range(n)]
    for num in arr:
        bi = int(n * num)
        buckets[bi].append(num)
    for bucket in buckets:
        insertionSort(bucket)
    index = 0
    for bucket in buckets:
        for num in bucket:
            arr[index] = num
            index += 1
# driver
arr = [0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434]
BucketSort(arr)
print(f"Bucket Sort: {arr}")
