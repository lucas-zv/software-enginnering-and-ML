import math

def sigmoid(x):
    return 1 / (1 + math.exp(-x))

def swish(x, beta=.01):
    return x * sigmoid(beta * x)

value = float(input("input the test value: "))

print(f"the value after the sigmoid is applied is {sigmoid(value):.25f}")
print(f"the swish value after the swish funtion is applied is {swish(value):.25f}")
print()

#this was completley unecessary its just me trying to apply oop
class sigmoid():
    
    def __init__(self, x):
        self.x = x

    def Sigmoid(self):
        return 1 / (1 + math.exp(-self.x))
    
sigmoid = sigmoid(float(input("what is the test input? "))).Sigmoid()
print(sigmoid)
