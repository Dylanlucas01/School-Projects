from vehicle import Vehicle
class Car(Vehicle):
    
    def __init__(self, name, max_speed, number_of_cylinders):
        super().__init__(name, max_speed)
        self.number_of_cylinders = number_of_cylinders

    def getNumber_of_cylinders(self):
        return self.number_of_cylinders

    def setNumber_of_cylinders(self, number_of_cylinders):
        self.getNumber_of_cylinders = number_of_cylinders

    def __str__(self):
        return super().__str__() + "Number of cylinders: " + str(self.number_of_cylinders)


