class animal():
   
   def __init__(self, name):
       self.name = name

   def eat(self):
       print(f"{self.name} is eating")

   def sleep(self):
       print(f"{self.name} is sleeping")
    
   def searching(self):
       print(f"{self.name} is searching for food")
       

class predator(animal):
    def hunt(self):
        print(f"{self.name} is hunting")

class prey(animal):
    def flee(self):
        print(f"{self.name} is fleeing")

class rabbit(prey):
    pass

class tiger(predator):
    pass

class snake(predator, prey):
    pass

Tiger = tiger("tony")
Rabbit = rabbit("bugs bunny")
Snake = snake("snek")

Tiger.hunt()

Rabbit.sleep()

Snake.searching()

