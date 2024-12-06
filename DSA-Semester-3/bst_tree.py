class Node:
    def __init__(self, data=None):
        self.data = data
        self.left = None
        self.right = None
class bst:
    def __init__(self):
        self.root = None

    def insert(self, data, root=None):
        if root is None:
            if self.root == None:
                self.root = Node(data)
            else:
                self.insert(data, self.root)
        else:
            if data < root.data:
                if root.left is None:
                    root.left = Node(data)
                else:
                    self.insert(data, root.left)
            else:
                if root.right is None:
                    root.right = Node(data)
                else:
                    self.insert(data, root.right)

    def in_traversal(self, root: Node):
        if root is None:
            return
        self.in_traversal(root.left)
        print("Data: ", root.data)
        self.in_traversal(root.right)

b = bst()
b.insert(5)
b.insert(4)
b.insert(1)
b.insert(2)
b.insert(6)
b.insert(7)
b.in_traversal(b.root)