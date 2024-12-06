class Stack():
    def __init__(self):
        self.stk = [None] * 10
        self.head = -1
    
    def capacity(self):
        return len(self.stk)
    
    def size(self):
        return self.head+1
    
    def is_empty(self):
        return True if self.head == -1 else False
    
    def resize(self):
        size = self.capacity() * 2
        newStk = [None] * size
        for i in range(self.size()):
            newStk[i] = self.stk[i]
        self.stk = newStk
    
    def display(self):
        if self.is_empty(): return
        for i in range(self.size()):
            print(f"{self.stk[i]}")

    def push(self, value):
        if self.size() >= self.capacity():
            self.resize()
        self.head+=1
        self.stk[self.head]=value

    def pop(self):
        if self.is_empty(): return None
        value = self.stk[self.head]
        self.stk[self.head] = None
        self.head-=1
        return value
    

class QUsingStk:
    def __init__(self, left=Stack()):
        if not isinstance(left, Stack):
            raise ValueError("Q arg must be an instance of Stack or empty")
        self.left = left
        self.right = Stack()
    
    def display(self):
        self.left.display()
   
    def enqueue(self, value):
        self.left.push(value)

    def dequeue(self):
        if self.left.size()==-1: return None
        
        self.move(self.left, self.right)
        value = self.right.pop()
        self.move(self.right, self.left)
        
        return value
    
    def move(self, fromStk :Stack, toStk :Stack):
        while not fromStk.is_empty():
            toStk.push(fromStk.pop())


stk = Stack()

stk.push(1)
stk.push(2)
stk.push(3)
stk.push(4)
stk.push(5)

q = QUsingStk(stk)

q.dequeue()
q.dequeue()
q.dequeue()

q.enqueue(1)

q.display()
