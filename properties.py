
class Rectangle():
    def __init__(self, width, height):
        self._width = width
        self._height = height

    @property
    def Width(self):
        return f"{self._width:.1f}cm"
    
    @property
    def Height(self):
        return f"{self._height:.1f}cm"

    @Width.setter
    def width(self, new_width):
        if new_width > 0:
           self._width = new_width
        else:
            print("the value must be greater than 0")

    @Width.setter
    def height(self, new_height):
        if new_height > 0:
           self._height = new_height
        else:
            print("the value must be greater than 0")

    @width.deleter
    def width1(self):
        if self._width < 5:
            del self._width
            print("that value was too small it got deleted: width")

    @height.deleter
    def height1(self):
        if self._height < 2:
            del self._height
            print("that value was too small it got deleted: height")


rectangle = Rectangle(10, 5)
rectangle.width = float(input("what is your width: "))
rectangle.height = float(input("what is your height: "))


print(rectangle._width)
print(rectangle._height)

print(rectangle.Height)

del rectangle.width1
del rectangle.height1
