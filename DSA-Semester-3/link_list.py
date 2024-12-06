class Node:
    def __init__(self):
        self.value = None
        self.next = None

class LinkList:
    def __init__(self):
        self.head = None
    
    def pushAtHead(self, value):
        node = Node()
        node.value = value
        if self.head == None:
            self.head = node
            return
        node.next = self.head
        self.head = node

    def push(self, value):
        node = Node()
        node.value = value
        if self.head == None:
            self.head = node
            return
        current = self.head
        while current.next != None:
            current = current.next
        current.next = node

    def pop(self):
        current = self.head
        if current.next == None:
            value = current.value
            self.head = None
            return value
        while current.next.next != None:
            current = current.next
        value = current.next.value
        current.next = None
        return value
        
    def display(self):
        current = self.head
        while current != None:
            print(current.value)
            current = current.next

link = LinkList()

link.push(1)
link.push(2)
link.push(3)
link.push(4)
link.pushAtHead(5)
print(f"Element removed: {link.pop()}")
link.display()