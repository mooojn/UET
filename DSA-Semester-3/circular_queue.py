class CircularQ():
    def __init__(self, size):
        self.size = size
        self.Q = [None] * size
        self.rear = -1
        self.front = -1

    def enQ(self, data):
        if (self.rear + 1) % self.size == self.front:
            print("Queue is full")
            return
        elif self.front == -1: 
            self.front = 0
            self.rear = 0
            self.Q[self.front] = data
        else:
            self.rear = (self.rear + 1) % self.size
            self.Q[self.rear] = data

    def deQ(self):
        if self.front == -1:
            print("Queue is empty")
            return
        else:
            item = self.Q[self.front]
            if self.front == self.rear:  
                self.front = -1
                self.rear = -1
            else:
                self.Q[self.front] = None
                self.front = (self.front + 1) % self.size
            return item

    def display(self):
        if self.front == -1:
            print("Queue is empty")

        for i in self.Q:
            if i != None:
                print(i)
       
cq = CircularQ(6)
cq.enQ(1)
cq.enQ(2)
cq.enQ(3)
cq.enQ(4)
cq.enQ(5)
cq.deQ()
cq.display()
