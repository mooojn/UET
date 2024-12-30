import random

def RandomArray(size):   
    Arr = []
    for i in range(size):
        Arr.append(random.randint(-15000, 15000))
    return Arr

def ShuffleArray(array, start, end):
    sub_array = array[start:end+1]
    random.shuffle(sub_array)
    array[start:end+1] = sub_array
