from abc import ABC, abstractmethod
import math

class shape(ABC):

    @abstractmethod
    def area(self):
        pass

class triangle(shape):
    def __init__(self, base, height):
        self.base = base
        self.height = height

    def area(self):
        return self.base * self.height / 2

class circle(shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return math.pi * self.radius ** 2


class rectangle(shape):
    def __init__(self, base, height):
        self.base = base
        self.height = height

    def area(self):
        return self.base * self.height

class square(shape):
    def __init__(self, side):
        self.side = side

    def area(self):
        return self.side ** 2
    
class donut(shape):
    def __init__(self, toppings, radius):
        self.radius = radius
        self.toppings = toppings

    def area(self):
        return math.pi * (self.radius - (self.radius / 2))

shapes = [triangle(10, 5), circle(6), rectangle(9, 4), square(5), donut("sprinkles", 4)]

for shape in shapes:
    print(shape.area())
