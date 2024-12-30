class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

def prefix_to_tree(expr):
    stack = []
    for char in reversed(expr):
        if char.isalnum():
            stack.append(Node(char))
        else:
            node = Node(char)
            node.left = stack.pop()
            node.right = stack.pop()
            stack.append(node)
    return stack[0]
    
def inorder_traversal(node):
    if not node: return ""
    return f"({inorder_traversal(node.left)} {node.value} {inorder_traversal(node.right)})"


prf = "F=(m*a)+b"
root = prefix_to_tree(prf)
print(inorder_traversal(root))
