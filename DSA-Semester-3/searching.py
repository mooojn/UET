import time

def binary_search(arr, trgt):
    left = 0
    right = len(arr) - 1

    steps = 0
    while left <= right:
        mid = (left+right) // 2
        if arr[mid] == trgt:
            print(f"Steps taken by binary: {steps}")
            return mid
        elif arr[mid] < trgt:
            left = mid + 1
        elif arr[mid] > trgt:
            right = mid - 1
        steps+=1
    return -1

def linear_search(arr, trgt):
    steps = 0
    for i in range(len(arr)):
        if arr[i] == trgt:
            print(f"Steps taken by linear: {steps}")
            return i
        steps+=1
    return -1

def checkTime(func):
    strt = time.time()
    func()
    end = time.time()
    return end-strt

nums = 1000000
size = nums+1
arr = range(1, nums + 1)
find = len(arr) - 1

# binary_search(arr, find)
binT = checkTime(lambda: binary_search(arr, find))
print(f"Time taken by Binary search: {binT}s")


# linear_search(arr, find)
linT = checkTime(lambda: linear_search(arr, find))
print(f"Time taken by Linear search: {linT}s")
