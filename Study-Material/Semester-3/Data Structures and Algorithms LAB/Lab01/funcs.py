# Problem-1
def SearchA(Arr, x):
    indexes = []
    for i in range(len(Arr)):
        if Arr[i] == x:
            indexes.append(i)
    return indexes
# driver
# print(SearchA([22,2,1,7,11,13,5,2,9], 2))

# Problem-2
def SearchB(Arr, x):
    indexes = []
    for i in range(len(Arr)):
        if Arr[i] == x:
            indexes.append(i)
        elif Arr[i] > x:
            break
    return indexes
# driver
# print(SearchB([1,2,2,5,7,9,11,13,22], 2))

# Problem-3
def Minimum(Arr, starting, ending):
    smallestNumIndex = starting
    smallestNum = Arr[starting]
    for i in range(starting, ending + 1):
        if Arr[i] < smallestNum:
            smallestNum = Arr[i]
            smallestNumIndex = i
    return smallestNumIndex
# driver
# print(Minimum([3,4,7,8,0,1,23,-2,-5], 4, 7))

# Problem-4
def Sort4(Arr):
    for i in range(len(Arr)):
        minIndex = Minimum(Arr, i, len(Arr) - 1)
        Arr[i], Arr[minIndex] = Arr[minIndex], Arr[i]
    return Arr
# driver
# print(Sort4([100,4,-3,-5,101,35,-4,1,0,1]))

# Problem-5
def StringReverse(str, starting, ending):
    return str[ending:starting:-1]
# driver
# print(StringReverse("University of Engineering and Technology Lahore", 26, 39))

# Problem-6
def SumIterative(number):
    total = 0
    while number > 0:
        total += number%10
        number = number//10
    return total
def SumRecursive(number):
    if number == 0:
        return 0
    else:
        return number%10 + SumRecursive(number//10)
# driver
# print(SumIterative(1524))
# print(SumRecursive(1524))

# Problem-7
def ColumnWiseSum(Mat):
    sum = 0
    columnSum = []
    for i in range(len(Mat[0])):
        for j in range(len(Mat)):
            sum+=Mat[j][i]
        columnSum.append(sum)
        sum = 0
    return columnSum
def RowWiseSum(Mat):
    sum = 0
    rowSum = []
    for i in Mat:
        for j in i:
            sum+=j
        rowSum.append(sum)
        sum = 0
    return rowSum
# driver
# print(ColumnWiseSum([[1, 13, 13], [5, 11, 6], [4, 4, 9]]))
# print(RowWiseSum([[1, 13, 13], [5, 11, 6], [4, 4, 9]]))

# Problem-8
def SortedMerge(Arr1, Arr2):
    i, j = 0, 0 
    merged = [] 
    while i < len(Arr1) and j < len(Arr2):
        if Arr1[i] < Arr2[j]:
            merged.append(Arr1[i])
            i += 1
        else:
            merged.append(Arr2[j])
            j += 1
    while i < len(Arr1):
        merged.append(Arr1[i])
        i += 1
    while j < len(Arr2):
        merged.append(Arr2[j])
        j += 1
    return merged
# driver
# print(SortedMerge([0,3,4,10,11], [1,8,13,24]))

# Problem-9
def PalindromRecursive(s):
    if len(s) <= 1:
        return True
    if s[0] == s[-1]:
        return PalindromRecursive(s[1:-1])
    return False
# driver
# print(PalindromRecursive("radar"))

# Problem-10
def Sort10(Arr):
    negatives = sorted([x for x in Arr if x < 0])
    positives = sorted([x for x in Arr if x >= 0])
    result = []
    i, j = 0, 0
    while i < len(negatives) and j < len(positives):
        result.append(negatives[i])
        result.append(positives[j])
        i += 1
        j += 1
    while i < len(negatives):
        result.append(negatives[i])
        i += 1
    while j < len(positives):
        result.append(positives[j])
        j += 1
    return result
# driver
# print(Sort10([10, -1, 9, 20, -3, -8, 22, 9, 7]))