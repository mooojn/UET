def QuickSort(Arr, p, r):
    if p < r:
        q = Partition(Arr, p, r)
        QuickSort(Arr, p, q-1)
        QuickSort(Arr, q+1, r)
def Partition(Arr, p, r):
    x = Arr[r]
    i = p - 1
    for j in range(p, r):
        if Arr[j] <= x:
            i = i + 1
            Arr[i], Arr[j] = Arr[j], Arr[i]
    Arr[i + 1], Arr[r] = Arr[r], Arr[i + 1]
    return i + 1
# driver
Arr = [10, 7, 8, 9, 1, 5]
QuickSort(Arr, 0, len(Arr)-1)
print(Arr)