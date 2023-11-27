from vehicle import Vehicle
class Plane(Vehicle):
    
    def __init__(self, name, max_speed, number_of_engines):
        super().__init__(name, max_speed)
        self.number_of_engines = number_of_engines

    def getNumber_of_engines(self):
        return self.number_of_engines

    def setNumber_of_engines(self, number_of_engines):
        self.getNumber_of_engines = number_of_engines

    def __str__(self):
        return super().__str__() + "Number of engines: " + str(self.number_of_engines)


