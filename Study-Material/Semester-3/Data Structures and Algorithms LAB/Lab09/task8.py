from typing import Set

class Position:
    def __init__(self, locname: str):
        self.locname = locname
    def __str__(self):
        return self.locname

class HasHeight:
    def __init__(self, height: int):
        self.height = height

class HasPosition:
    def __init__(self, at: Position):
        self.at = at

class Monkey(HasHeight, HasPosition):
    def __init__(self, at: Position, height: int = 0):
        HasHeight.__init__(self, height)
        HasPosition.__init__(self, at)

class PalmTree(HasHeight, HasPosition):
    def __init__(self, at: Position, height: int = 2):
        HasHeight.__init__(self, height)
        HasPosition.__init__(self, at)

class Box(HasHeight, HasPosition):
    def __init__(self, at: Position, height: int = 2):
        HasHeight.__init__(self, height)
        HasPosition.__init__(self, at)

class Banana(HasHeight, HasPosition):
    def __init__(self, at: Position, attached: PalmTree = None, height: int = 0):
        HasHeight.__init__(self, height)
        HasPosition.__init__(self, at)
        self.attached = attached
        self.owner = None

class World:
    def __init__(self):
        self.locations: Set[Position] = set()
    def add_location(self, position: Position):
        self.locations.add(position)

def go(monkey: Monkey, where: Position, world: World):
    if where not in world.locations:
        raise ValueError("Position not in world locations")
    if monkey.height >= 1:
        raise ValueError("Monkey can only move while on the ground")
    monkey.at = where
    return f"Monkey moved to {where}"

def push(monkey: Monkey, box: Box, where: Position, world: World):
    if monkey.at != box.at:
        raise ValueError("Monkey is not at the box's location")
    if where not in world.locations:
        raise ValueError("Position not in world locations")
    if monkey.height >= 1:
        raise ValueError("Monkey can only move the box while on the ground")
    monkey.at = where
    box.at = where
    return f"Monkey moved box to {where}"

def climb_up(monkey: Monkey, box: Box):
    if monkey.at != box.at:
        raise ValueError("Monkey is not at the box's location")
    monkey.height += box.height
    return "Monkey climbs the box"

def grasp(monkey: Monkey, banana: Banana):
    if monkey.height != banana.height:
        raise ValueError("Monkey's height does not match banana's height")
    if monkey.at != banana.at:
        raise ValueError("Monkey is not at the banana's location")
    banana.owner = monkey
    return "Monkey takes the banana"

def infer_owner_at(palmtree: PalmTree, banana: Banana):
    if banana.attached != palmtree:
        raise ValueError("Banana is not attached to the palm tree")
    banana.at = palmtree.at
    return "Remembered that if banana is on palm tree, its location is where palm tree is"

def infer_banana_height(palmtree: PalmTree, banana: Banana):
    if banana.attached != palmtree:
        raise ValueError("Banana is not attached to the palm tree")
    banana.height = palmtree.height
    return "Remembered that if banana is on the tree, its height equals tree's height"

world = World()

p1 = Position("Position A")
p2 = Position("Position B")
p3 = Position("Position C")

world.add_location(p1)
world.add_location(p2)
world.add_location(p3)

monkey = Monkey(at=p1)
box = Box(at=p2)
palm_tree = PalmTree(at=p3)
banana = Banana(at=p3, attached=palm_tree)

actions = [
    lambda: go(monkey, p2, world),  
    lambda: infer_banana_height(palm_tree, banana),  
    lambda: infer_owner_at(palm_tree, banana),  
    lambda: push(monkey, box, p3, world),  
    lambda: climb_up(monkey, box),  
    lambda: grasp(monkey, banana)  
]
goal = lambda: banana.owner == monkey

for action in actions:
    print(action())

if goal():
    print("The monkey successfully obtained the banana!")
else:
    print("The monkey failed to get the banana.")
