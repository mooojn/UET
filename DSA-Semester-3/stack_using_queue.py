class Queue:
    def __init__(self):
        self.q = [None] * 3
        self.rear = -1

    def capacity(self):
        return len(self.q)
    
    def size(self):
        return self.rear+1

    def is_empty(self):
        return True if self.rear==-1 else False

    def resize(self):
        size = self.capacity() * 2
        newQ = [None] * size
        for i in range(self.size()):
            newQ[i] = self.q[i]
        self.q = newQ
    
    def display(self):
        if self.is_empty(): return
        for i in range(self.size()):
            print(f"{self.q[i]}")

    def enqueue(self, value):
        if self.size() >= self.capacity():
            self.resize()
        self.rear+=1
        self.q[self.rear]=value

    def dequeue(self):
        if self.is_empty(): return None
        value = self.q[0]
        self.q[0]=None
        self.move()
        self.rear-=1
        return value

    def move(self):
        for i in range(0, self.size()-1):
            self.q[i] = self.q[i+1]


class StackUsingQueue:
    def __init__(self):
        self.priQ = Queue()
        self.secQ = Queue()

    def display(self):
        self.priQ.display()

    def push(self, value):
        self.secQ.enqueue(value)

        while not self.priQ.is_empty():
            self.secQ.enqueue(self.priQ.dequeue())
        
        self.priQ, self.secQ = self.secQ, self.priQ
    
    def pop(self):
        if self.priQ.is_empty(): return None
        value = self.priQ.dequeue()
        return value

    
stk = StackUsingQueue()

stk.push(1)
stk.push(2)
stk.push(3)
stk.push(4)

stk.pop()
stk.pop()

stk.display()
