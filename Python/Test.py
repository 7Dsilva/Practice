# print("hello darren")

class Dog:
    species = "Canine"

    def __init__(self, name, age):
        self.name = name
        self.age = age


dog1 = Dog("Buddy", 3)  # object of a class


print(dog1.name)
print(dog1.species)

dog2 = Dog("Rudolf", 5)
print(dog2.name, dog2.species, dog2.age)


# self parameter is a reference to current instance of a class
# It allows us to access the attributes and methods of the object
