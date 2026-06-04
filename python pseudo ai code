import math

vectors = []
#biases for the not really an ai now that only has static biases and no neural network basically just a script
biases = [0.5, 1, 0.2]
array = []
count = 0
for database_vector in range(3):
        count += 1
        if count == 1:
            place = "x"
        elif count == 2:
            place = "y"
        else:
            place = "z"
        vector  = int(input(f"what is the {place} coordinate "))
        vectors.append(vector)
        print(vectors) 


    #this is our dot product
def ai():
    print(vectors)
    print(biases)
    new_weights = math.sumprod(vectors, biases)
    print(new_weights)
    #this is the "bounding box" where the ai will look at the screen but for now will just be the user inputing the "vector"
    if new_weights <= 100:
        print("ALERT: Activation too low. Signal dropped.")
    elif new_weights >= 300:
        print("ALERT: Activation too high. signal dropped")
    else:
        print("SUCCESS: Signal within parameters")
    
        new_array = new_weights / 100
        array.append(new_array)
        print(array)
