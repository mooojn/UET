N = 4

def printSolution(board):
    for row in board:
        print(" ".join(str(cell) for cell in row))
    print()

def isSafe(board, row, col):    
    for i in range(col):
        if board[row][i] == 1:
            return False

    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False
    
    for i, j in zip(range(row, N, 1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False
    return True

def solveNQUtil(board, col):
    if col >= N:
        return True
    for i in range(N):
        if isSafe(board, i, col):        
            board[i][col] = 1
    
            if solveNQUtil(board, col + 1):
                return True        
            board[i][col] = 0    
    return False

def solveNQ():
    board = [[0 for _ in range(N)] for _ in range(N)]
    if not solveNQUtil(board, 0):
        print("Solution does not exist")
        return False    
    printSolution(board)
    return True

solveNQ()
