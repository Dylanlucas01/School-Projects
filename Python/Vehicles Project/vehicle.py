class Vehicle(object):
    def __init__(self, name, max_speed):
        self.name = name
        self.max_speed = max_speed

    def getMax_speed(self):
        return self.max_speed

    def getName(self):
        return self.name

    def setMax_speed(self, max_speed):
        self.max_speed = max_speed

    def setName(self, name):
        self.name = name

    def __str__(self):
        return "Name: " + self.name + "\n Max speed: " + str(self.max_speed)