import numpy as np
A = [[1, 2, 3],[4, 5, 6]]
B = [[7, 8, 9],[10, 11, 12]]

# 1
def printMatrix(A, startingIndex, rows, columns):
    startRow, startCol = startingIndex
    for i in range(rows):
        for j in range(columns):
            currentRow = startRow + i
            currentCol = startCol + j
            if currentRow < len(A) and currentCol < len(A[0]):
                print(A[currentRow][currentCol], end=" ")
            else:
                print("OutOfBounds", end=" ")
        print()  
# driver
printMatrix(A, (0,1), 1, 1)

# 2
def MatAdd(A, B):
    rows = len(A)
    columns = len(A[0])
    result = [[0] * columns for _ in range(rows)]
    for i in range(rows):
        for j in range(columns):
            result[i][j] = A[i][j] + B[i][j]
    return result
# driver
# print(MatAdd(A, B))

# 3
def MatAddPartial(A, B, start, size):
    startRow, startCol = start    
    result = [[0] * size for _ in range(size)]
    for i in range(size):
        for j in range(size):
            result[i][j] = A[startRow + i][startCol + j] + B[startRow + i][startCol + j]
    return result
# driver
# print(MatAddPartial(A, B, (0, 1), 2))

# 4
A = [[1, 2, 3],[4, 5, 6]]
B = [[7, 8],[9, 10],[11, 12]]
def MatMul(A, B):
    m = len(A)        
    n = len(A[0])     
    p = len(B[0])     

    C = np.array([[0]*p for _ in range(n)])
    for i in range(m):
        for j in range(p):
            for k in range(n):
                C[i][j] += A[i][k] * B[k][j]
    return C
# driver
# print(MatMul(A, B))

# 5
def MatMulRecursive(A, B):
    m = len(A)
    n = len(B[0])
    p = len(B) 
    result = [[0 for _ in range(n)] for _ in range(m)]
    def multiply(row, col, k, tempSum):
        if row >= m:
            return
        if col >= n:
            multiply(row + 1, 0, 0, 0)
            return
        if k >= p:
            result[row][col] = tempSum
            multiply(row, col + 1, 0, 0)
            return
        tempSum += A[row][k] * B[k][col]
        multiply(row, col, k + 1, tempSum)
    multiply(0, 0, 0, 0)
    return result
# driver
# print(MatMulRecursive(A, B))

# 6
def Split(matrix):
    n = matrix.shape[0]
    m = matrix.shape[1]
    return matrix[:n//2, :m//2], matrix[:n//2, m//2:], matrix[n//2:, :m//2], matrix[n//2:, m//2:]

def Strassen(A, B):
    if A.shape[0] == 1 or A.shape[1] == 1 or B.shape[1] == 1:
        return MatMul(A, B)
    
    a, b, c, d = Split(A)
    e, f, g, h = Split(B)

    p1 = Strassen(a + d, e + h)
    p2 = Strassen(d, g - e)
    p3 = Strassen(a + b, h)
    p4 = Strassen(b - d, g + h)
    p5 = Strassen(a, f - h)
    p6 = Strassen(c + d, e)
    p7 = Strassen(a - c, e + f)

    c11 = p1 + p2 - p3 + p4
    c12 = p5 + p3
    c21 = p6 + p2
    c22 = p5 + p1 - p6 - p7

    c = np.block([[c11, c12], [c21, c22]])
    return c

def padMatrix(matrix, size):
    padded_matrix = np.zeros((size, size))
    padded_matrix[:matrix.shape[0], :matrix.shape[1]] = matrix
    return padded_matrix

A = np.array([
    [2, 4, 1, 3],
    [2, 5, 2, 4],
    [9, 7, 5, 2]
])
B = np.array([
    [1, 3, 2, 4],
    [4, 5, 1, 6],
    [7, 8, 4, 3]
])
n = max(A.shape[0], A.shape[1], B.shape[0], B.shape[1])
next_power_of_2 = 1 << (n - 1).bit_length()
A_padded = padMatrix(A, next_power_of_2)
B_padded = padMatrix(B, next_power_of_2)

result = Strassen(A_padded, B_padded)
result = result[:A.shape[0], :B.shape[1]]
# driver
# print(result)
