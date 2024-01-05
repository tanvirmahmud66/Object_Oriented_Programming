class Person:
    def __init__(self, name, age): #peremeterize constructor
        self.name=name
        self.age=age
    
    def walk(self):
        print(f'{self.name} is walking right now. His age is {self.age}')
    

ob1 = Person("Tanvir Mahmud",27)
ob1.walk()