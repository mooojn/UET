class Item:
    def __init__(self, value=-1, priority=-1):
        self.value = value
        self.priority = priority
    
class PriorityQ:
    def __init__(self):
        self.q = [Item()] * 10000
        self.rear = -1
    
    def enqueue(self, item: Item):
        self.rear += 1
        self.q[self.rear] = item

    def peek(self):
        maxPriority = idx = -1
        for i in range(self.rear+1):
            if self.q[i].priority > maxPriority:
                maxPriority = self.q[i].priority
                idx = i
            if maxPriority == self.q[i].priority:
                if self.q[idx].value < self.q[i].value:
                    idx = i
        return idx

    def dequeue(self):
        idx = self.peek()
        if idx == -1: return None
        
        value = self.q[idx].value
        i = idx
        while i < self.rear:
            self.q[i] = self.q[i+1]
            i+=1
        self.rear -= 1
        return value

    def display(self):
        for i in range(self.rear+1):
            print(f"Value: {self.q[i].value}, Priority: {self.q[i].priority}")
        return None
    
    def display_sorted(self):
        sortBasedOnPriority = sorted(self.q[:self.rear + 1], key=lambda x: (-x.priority, -x.value))
        for i in sortBasedOnPriority:
            print(f"Value: {i.value}, Priority: {i.priority}")


priQ = PriorityQ()

priQ.enqueue(Item(1, 1))
priQ.enqueue(Item(2, 3))
priQ.enqueue(Item(3, 2))
priQ.enqueue(Item(4, 1))

print(priQ.dequeue())
print(priQ.dequeue())

priQ.display_sorted()

print(priQ.dequeue())
