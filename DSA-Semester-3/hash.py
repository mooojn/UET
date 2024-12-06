def Hash1(arr, hashTable):
    n = len(arr)
    for i in range(n):
        hv = arr[i] % tsize
        if hashTable[hv] == None:
            hashTable[hv] = arr[i]
        else:
            # quadraticProbing(hashTable, hv, i)
            doubleHash(arr, hashTable, hv, i)
    print(hashTable)

def quadraticProbing(hashTable, hv, i):
    for j in range(1, len(hashTable)+1):
        t = (hv + j*j) % tsize
        if hashTable[t] == None:
            hashTable[t] = arr[i]
            break

def Hash2(arr, hashTable):
    n = len(arr)
    for i in range(n):
        hv = arr[i] % tsize 
        if hashTable[hv] is None:  
            hashTable[hv] = arr[i]
        else:
            linearProbing(arr, hashTable, hv, i)  
    print(hashTable)

def linearProbing(arr, hashTable, hv, i):
    tsize = len(hashTable)
    for j in range(1, tsize + 1): 
        t = (hv + j) % tsize 
        if hashTable[t] is None: 
            hashTable[t] = arr[i]
            break

def doubleHash(arr, hashTable, hv, i):
    hash2 = 1 + (arr[i] % (tsize - 1))
    for j in range(1, tsize+1):
        t = (hv+j*hash2) % tsize
        if hashTable[t] is None:
            hashTable[t] = arr[i]
        


def search(item, hashTable):
    hv = item % tsize
    if hashTable[hv] == item:
        return hv
    else:
        for j in range(1, len(hashTable)+1):
            t = (hv + j*j) % tsize
            if hashTable[t] == item:
                return t

arr = [1,2,3,4,5,6,7,8,9]
tsize = int(len(arr) + 0.5 * len(arr))
hash_table = [None] * tsize
