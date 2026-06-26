def glazing(func):
    def wrapper(*args, **kwargs):
        print("*you added glazing*")
        func(*args, **kwargs)
    return wrapper

def sprinkles(func):
    def wrapper(*args, **kwargs):
        print("*you added sprinkles*")
        func(*args, **kwargs)
    return wrapper

def chocolate_filling(func):
    def wrapper(*args, **kwargs):
        print("*you added chcolate filling*")
        func(*args, **kwargs)
    return wrapper

@glazing
@sprinkles
def donut(flavour): 
    print(f"here is your {flavour} donut")

taste = input("what is the flavour you want? ")
donut(taste)
