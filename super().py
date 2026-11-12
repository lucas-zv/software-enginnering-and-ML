class shape():
    def __init__(self, colour, height, length):
        self.colour = colour
        self.height = height
        self.length = length

    def describe(self):
        print(f"the shape is {self.colour} and {'long' if self.length > 8 else 'short'}")

class Square(shape):
    def __init__(self, colour, height, length):
        super().__init__(colour, height, length)

    def describe(self):
        print(f"this square has an area of {self.length ** 2}cm^2")
        super().describe()


class Regtangle(shape):
    def __init__(self, colour, height, length):
        super().__init__(colour, height, length)

    def describe(self):
        print(f"this rectangle has an area of {self.length * self.height}cm^2")
        super().describe()


class Triangle(shape):
    def __init__(self, colour, length, height):
        super().__init__(colour, height, length)

    def describe(self):
        print(f"this triangle has an area of {self.length * self.height / 2}cm^2")
        super().describe()

square = Square(colour= "red", height=10, length= 10)
triangle = Triangle(colour= "blue", height=5, length= 6)
rectangle = Regtangle(colour= "green", height=3, length= 15)

triangle.describe()
print()
square.describe()
print()
rectangle.describe()
