import copy
from heapq import heappush, heappop

n = 3
row = [1, 0, -1, 0]
col = [0, -1, 0, 1]

class PriorityQueue:
    def __init__(self):
        self.heap = []

    def push(self, k):
        heappush(self.heap, k)

    def pop(self):
        return heappop(self.heap)

    def empty(self):
        return not self.heap

class Node:
    def __init__(self, parent, mat, empty_tile_pos, cost, level):
        self.parent = parent
        self.mat = mat
        self.empty_tile_pos = empty_tile_pos
        self.cost = cost
        self.level = level
    
    def __lt__(self, other):
        return self.cost < other.cost

def calculate_cost(mat, final):
    count = 0
    for i in range(n):
        for j in range(n):
            if mat[i][j] and mat[i][j] != final[i][j]:
                count += 1
    return count

def new_node(mat, empty_tile_pos, new_empty_tile_pos, level, parent, final):
    new_mat = copy.deepcopy(mat)
    x1, y1 = empty_tile_pos
    x2, y2 = new_empty_tile_pos
    new_mat[x1][y1], new_mat[x2][y2] = new_mat[x2][y2], new_mat[x1][y1]

    cost = calculate_cost(new_mat, final)
    new_node = Node(parent, new_mat, new_empty_tile_pos, cost, level)
    return new_node

def print_matrix(mat):
    for i in range(n):
        for j in range(n):
            print("%d " % mat[i][j], end=" ")
        print()

def is_safe(x, y):
    return 0 <= x < n and 0 <= y < n

def print_path(root):
    if root is None:
        return
    print_path(root.parent)
    print_matrix(root.mat)
    print()

def solve(initial, empty_tile_pos, final):
    pq = PriorityQueue()
    cost = calculate_cost(initial, final)
    root = Node(None, initial, empty_tile_pos, cost, 0)
    pq.push(root)

    while not pq.empty():
        minimum = pq.pop()
        if minimum.cost == 0:
            print_path(minimum)
            return
        for i in range(4):
            new_tile_pos = [
                minimum.empty_tile_pos[0] + row[i],
                minimum.empty_tile_pos[1] + col[i],
            ]
            if is_safe(new_tile_pos[0], new_tile_pos[1]):
                child = new_node(minimum.mat, minimum.empty_tile_pos, new_tile_pos, minimum.level + 1, minimum, final)
                pq.push(child)

initial = [
    [1, 2, 3],
    [5, 6, 0],
    [7, 8, 4]
]
final = [
    [1, 2, 3],
    [5, 8, 6],
    [0, 7, 4]
]
empty_tile_pos = [1, 2]

solve(initial, empty_tile_pos, final)
