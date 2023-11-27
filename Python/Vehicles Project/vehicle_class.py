from car import Car
from plane import Plane
def main():
	myCar = Car("Mercadies", 150, 8)
	print (myCar.getName())
	print (myCar.getMax_speed())
	print (myCar.getNumber_of_cylinders())
	myCar.setMax_speed(myCar.getMax_speed()+50)
	str(myCar)

	myPlane = Plane("Tomcat", 1500, 2)
	print (myPlane.getName())
	print (myPlane.getMax_speed())
	print (myPlane.getNumber_of_engines())
	myPlane.setMax_speed(myPlane.getMax_speed()+100)
	str(myPlane)




if __name__ == "__main__":
	main()