import time
from funcs import ShuffleArray
from Insertion import InsertionSort
from MergeSort import MergeSort

def read_words(file_name):
    with open(file_name, 'r') as file:
        words = file.read().splitlines()
    return words

words = read_words('words.txt')
n = len(words)

start_time = time.time()
InsertionSort(words, 0, n - 1)
print(f'InsertionSort runtime: {time.time() - start_time} seconds')

words = read_words('words.txt')  

start_time = time.time()
MergeSort(words, 0, n - 1)
print(f'MergeSort runtime: {time.time() - start_time} seconds')
ShuffleArray(words, 0, n - 1)

start_time = time.time()
InsertionSort(words, 0, n - 1)

print(f'InsertionSort after shuffling: {time.time() - start_time} seconds')
words = read_words('words.txt')  
ShuffleArray(words, 0, n - 1)  

start_time = time.time()
MergeSort(words, 0, n - 1)
print(f'MergeSort after shuffling: {time.time() - start_time} seconds')