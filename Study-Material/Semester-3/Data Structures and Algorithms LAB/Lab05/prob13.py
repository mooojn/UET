class Grid:
    def __init__(self):
        self.grid = []

    def add_row(self, row):
        if isinstance(row, list):
            self.grid.append(row)
        else:
            print("Error: Row must be a list.")

    def add_column(self, column):
        if len(column) != len(self.grid):
            print("Error: Column length must match the number of rows.")
            return

        for i in range(len(self.grid)):
            self.grid[i].append(column[i])

    def display(self):
        for row in self.grid:
            print(row)

    def sum_elements(self):
        total_sum = sum(sum(row) for row in self.grid)
        return total_sum


grid = Grid()

grid.add_row([1, 2, 3])
grid.add_row([4, 5, 6])
grid.add_row([7, 8, 9])
print("Grid after adding rows:")
grid.display()

grid.add_column([10, 11, 12])

print("\nGrid after adding a column:")
grid.display()

total_sum = grid.sum_elements()
print("\nSum of all elements in the grid:", total_sum)
