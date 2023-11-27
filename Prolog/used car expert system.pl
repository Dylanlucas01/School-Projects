car(Attributes, X):-
    List = [['Acura', 'SUV', 'Asia', 'All', 265.0, 23.0, 'MDX'],
            ['Audi', 'Sedan', 'Europe', 'Front', 170.0, 31.0, 'A4 1.8T 4dr'],
            ['Audi', 'Sedan', 'Europe', 'Front', 170.0, 30.0, 'A41.8T convertible 2dr'],
            ['BMW', 'SUV', 'Europe', 'All', 225.0, 23.0, 'X3 3.0i'],
            ['BMW', 'SUV', 'Europe', 'All', 325.0, 22.0, 'X5 4.4i'],
            ['BMW', 'Sedan', 'Europe', 'Rear', 184.0, 29.0, '325i 4dr'],
            ['BMW', 'Sedan', 'Europe', 'Rear', 184.0, 29.0, '325Ci 2dr'],
            ['BMW', 'Sedan', 'Europe', 'Rear', 184.0, 27.0, '325Ci convertible 2dr'],
            ['BMW', 'Sports', 'Europe', 'Rear', 225.0, 29.0, 'Z4 convertible 3.0i 2dr'],
            ['BMW', 'Wagon', 'Europe', 'All', 184.0, 26.0, '325xi Sport'],
            ['Buick', 'SUV', 'USA', 'All', 275.0, 21.0, 'Rainier'],
            ['Buick', 'Sedan', 'USA', 'Front', 240.0, 28.0, 'Park Avenue Ultra 4dr'],
            ['Cadillac', 'SUV', 'USA', 'Front', 295.0, 18.0, 'Escalade'],
            ['Cadillac', 'Sports', 'USA', 'Rear', 320.0, 25.0, 'XLR convertible 2dr'],
            ['Cadillac', 'Truck', 'USA', 'All', 345.0, 17.0, 'Escalade EXT'],
            ['Chevrolet', 'SUV', 'USA', 'Front', 295.0, 18.0, 'Suburban 1500 LT'],
            ['Chevrolet', 'SUV', 'USA', 'All', 295.0, 18.0, 'Tahoe LT'],
            ['Chevrolet', 'SUV', 'USA', 'Front', 275.0, 21.0, 'TrailBlazer LT'],
            ['Chevrolet', 'Sedan', 'USA', 'All', 190.0, 17.0, 'Astro'],
            ['Chevrolet', 'Sedan', 'USA', 'Front', 185.0, 26.0, 'Venture LS'],
            ['Chevrolet', 'Sports', 'USA', 'Rear', 350.0, 25.0, 'Corvette 2dr'],
            ['Chrysler', 'Sedan', 'USA', 'Front', 180.0, 26.0, 'Town and Country LX'],
            ['Chrysler', 'Sedan', 'USA', 'Front', 215.0, 25.0, 'Town and Country Limited'],
            ['Chrysler', 'Sports', 'USA', 'Rear', 215.0, 25.0, 'Crossfire 2dr'],
            ['Chrysler', 'Wagon', 'USA', 'Rear', 250.0, 23.0, 'Pacifica'],
            ['Dodge', 'Sports', 'USA', 'Rear', 500.0, 20.0, 'Viper SRT-10 convertible 2dr'],
            ['Dodge', 'Truck', 'USA', 'Rear', 210.0, 22.0, 'Dakota Regular Cab'],
            ['Dodge', 'Truck', 'USA', 'Rear', 210.0, 22.0, 'Dakota Club Cab'],
            ['Dodge', 'Truck', 'USA', 'Rear', 215.0, 21.0, 'Ram 1500 Regular Cab ST'],
            ['Ford', 'SUV', 'USA', 'All', 310.0, 13.0, 'Excursion 6.8 XLT'],
            ['Ford', 'Sports', 'USA', 'Front', 280.0, 24.0, 'Thunderbird Deluxe convert w/hardtop 2d'],
            ['Ford', 'Truck', 'USA', 'Rear', 231.0, 19.0, 'F-150 Regular Cab XL'],
            ['Ford', 'Truck', 'USA', 'All', 300.0, 18.0, 'F-150 Supercab Lariat'],
            ['Ford', 'Truck', 'USA', 'Rear', 143.0, 29.0, 'Ranger 2.3 XL Regular Cab'],
            ['Ford', 'Wagon', 'USA', 'Front', 130.0, 33.0, 'Focus ZTW'],
            ['GMC', 'Truck', 'USA', 'All', 300.0, 18.0, 'Sierra HD 2500'],
            ['GMC', 'Truck', 'USA', 'All', 190.0, 19.0, 'Sonoma Crew Cab'],
            ['Honda', 'Hybrid', 'Asia', 'Front', 93.0, 51.0, 'Civic Hybrid 4dr manual (gas/electric)'],
            ['Hyundai', 'Sedan', 'Asia', 'Front', 103.0, 33.0, 'Accent GL 4dr'],
            ['Hyundai', 'Sedan', 'Asia', 'Front', 103.0, 33.0, 'Accent GT 2dr hatch'],
            ['Hyundai', 'Sedan', 'Asia', 'Front', 138.0, 34.0, 'Elantra GLS 4dr'],
            ['Hyundai', 'Sedan', 'Asia', 'Front', 194.0, 26.0, 'XG350 L 4dr'],
            ['Hyundai', 'Sports', 'Asia', 'Front', 172.0, 26.0, 'Tiburon GT V6 2dr'],
            ['Infiniti', 'Sedan', 'Asia', 'Rear', 260.0, 26.0, 'G35 4dr'],
            ['Infiniti', 'Sedan', 'Asia', 'Rear', 280.0, 26.0, 'G35 Sport Coupe 2dr'],
            ['Infiniti', 'Wagon', 'Asia', 'All', 315.0, 19.0, 'FX45'],
            ['Isuzu', 'SUV', 'Asia', 'All', 275.0, 20.0, 'Ascender S'],
            ['Isuzu', 'SUV', 'Asia', 'Front', 193.0, 21.0, 'Rodeo S'],
            ['Jaguar', 'Sedan', 'Europe', 'All', 192.0, 26.0, 'X-Type 2.5 4dr'],
            ['Jaguar', 'Sedan', 'Europe', 'All', 227.0, 25.0, 'X-Type 3.0 4dr'],
            ['Jeep', 'SUV', 'USA', 'Front', 195.0, 21.0, 'Grand Cherokee Laredo'],
            ['Jeep', 'SUV', 'USA', 'All', 150.0, 24.0, 'Liberty Sport'],
            ['Jeep', 'SUV', 'USA', 'All', 190.0, 19.0, 'Wrangler Sahara convertible 2dr'],
            ['Kia', 'SUV', 'Asia', 'Front', 192.0, 19.0, 'Sorento LX'],
            ['Kia', 'Sedan', 'Asia', 'Front', 138.0, 30.0, 'Optima LX 4dr'],
            ['Kia', 'Sedan', 'Asia', 'Front', 195.0, 22.0, 'Sedona LX'],
            ['Kia', 'Wagon', 'Asia', 'Front', 104.0, 33.0, 'Rio Cinco'],
            ['Land Rover', 'SUV', 'Europe', 'All', 282.0, 16.0, 'Range Rover HSE'],
            ['Land Rover', 'SUV', 'Europe', 'All', 217.0, 16.0, 'Discovery SE'],
            ['Land Rover', 'SUV', 'Europe', 'All', 174.0, 21.0, 'Freelander SE'],
            ['Lexus', 'SUV', 'Asia', 'All', 235.0, 19.0, 'GX 470'],
            ['Lexus', 'SUV', 'Asia', 'All', 235.0, 17.0, 'LX 470'],
            ['Lexus', 'SUV', 'Asia', 'All', 230.0, 24.0, 'RX 330'],
            ['Lexus', 'Sports', 'Asia', 'Rear', 300.0, 23.0, 'SC 430 convertible 2dr'],
            ['Lexus', 'Wagon', 'Asia', 'Rear', 215.0, 24.0, 'IS 300 SportCross'],
            ['Lincoln', 'SUV', 'USA', 'All', 300.0, 18.0, 'Navigator Luxury'],
            ['Lincoln', 'SUV', 'USA', 'Front', 302.0, 18.0, 'Aviator Ultimate'],
            ['Lincoln', 'Sedan', 'USA', 'Rear', 232.0, 26.0, 'LS V6 Luxury 4dr'],
            ['Mazda', 'Truck', 'Asia', 'Rear', 143.0, 29.0, 'B2300 SX Regular Cab'],
            ['Mazda', 'Truck', 'Asia', 'All', 207.0, 19.0, 'B4000 SE Cab Plus'],
            ['Mercedes-Benz', 'SUV', 'Europe', 'All', 292.0, 14.0, 'G500'],
            ['Mercedes-Benz', 'SUV', 'Europe', 'All', 288.0, 17.0, 'ML500'],
            ['Mercedes-Benz', 'Sedan', 'Europe', 'Rear', 189.0, 30.0, 'C230 Sport 2dr'],
            ['Mercedes-Benz', 'Sedan', 'Europe', 'Rear', 215.0, 26.0, 'C320 Sport 2dr'],
            ['Mercedes-Benz', 'Sedan', 'Europe', 'Rear', 168.0, 25.0, 'C240 4dr'],
            ['Mercedes-Benz', 'Wagon', 'Europe', 'Rear', 221.0, 27.0, 'E320'],
            ['Mercedes-Benz', 'Wagon', 'Europe', 'All', 302.0, 24.0, 'E500'],
            ['Mercury', 'SUV', 'USA', 'Front', 210.0, 21.0, 'Mountaineer'],
            ['Mercury', 'Sedan', 'USA', 'Front', 155.0, 27.0, 'Sable GS 4dr'],
            ['Mercury', 'Sedan', 'USA', 'Rear', 224.0, 25.0, 'Grand Marquis GS 4dr'],
            ['Mercury', 'Sedan', 'USA', 'Rear', 224.0, 25.0, 'Grand Marquis LS Premium 4dr'],
            ['Mitsubishi', 'Sports', 'Asia', 'Front', 271.0, 26.0, 'Lancer Evolution 4dr'],
            ['Mitsubishi', 'Wagon', 'Asia', 'Front', 160.0, 31.0, 'Lancer Sportback LS'],
            ['Nissan', 'SUV', 'Asia', 'Front', 305.0, 19.0, 'Pathfinder Armada SE'],
            ['Nissan', 'Truck', 'Asia', 'All', 305.0, 18.0, 'Titan King Cab XE'],
            ['Nissan', 'Wagon', 'Asia', 'Rear', 245.0, 25.0, 'Murano SL'],
            ['Pontiac', 'SUV', 'USA', 'Front', 185.0, 26.0, 'Aztek'],
            ['Pontiac', 'Sedan', 'USA', 'Front', 140.0, 33.0, 'Sunfire 1SA 2dr'],
            ['Pontiac', 'Sedan', 'USA', 'Front', 175.0, 29.0, 'Grand Am GT 2dr'],
            ['Porsche', 'Sports', 'Europe', 'Rear', 228.0, 29.0, 'Boxster convertible 2dr'],
            ['Porsche', 'Sports', 'Europe', 'Rear', 258.0, 26.0, 'Boxster S convertible 2dr'],
            ['Saab', 'Sedan', 'Europe', 'Front', 210.0, 28.0, '9-3 Arc Sport 4dr'],
            ['Saab', 'Sedan', 'Europe', 'Front', 210.0, 28.0, '9-3 Aero 4dr'],
            ['Saturn', 'Sedan', 'USA', 'Front', 182.0, 28.0, 'L300-2 4dr'],
            ['Saturn', 'Wagon', 'USA', 'Front', 140.0, 34.0, 'L300 2'],
            ['Subaru', 'Sedan', 'Asia', 'All', 165.0, 28.0, 'Impreza 2.5 RS 4dr'],
            ['Subaru', 'Sedan', 'Asia', 'All', 165.0, 28.0, 'Legacy L 4dr'],
            ['Subaru', 'Sedan', 'Asia', 'All', 165.0, 28.0, 'Legacy GT 4dr'],
            ['Subaru', 'Sedan', 'Asia', 'All', 165.0, 27.0, 'Outback Limited Sedan 4dr'],
            ['Toyota', 'SUV', 'Asia', 'Front', 245.0, 21.0, '4Runner SR5 V6'],
            ['Toyota', 'SUV', 'Asia', 'All', 230.0, 24.0, 'Highlander V6'],
            ['Toyota', 'Sedan', 'Asia', 'Front', 230.0, 27.0, 'Sienna CE'],
            ['Toyota', 'Sedan', 'Asia', 'Front', 230.0, 27.0, 'Sienna XLE Limited'],
            ['Toyota', 'Sports', 'Asia', 'Front', 180.0, 33.0, 'Celica GT-S 2dr'],
            ['Toyota', 'Sports', 'Asia', 'Rear', 138.0, 32.0, 'MR2 Spyder convertible 2dr'],
            ['Volkswagen', 'Sedan', 'Europe', 'Front', 420.0, 19.0, 'Phaeton W12 4dr'],
            ['Volkswagen', 'Wagon', 'Europe', 'Front', 115.0, 30.0, 'Jetta GL'],
            ['Volvo', 'Sedan', 'Europe', 'Front', 268.0, 26.0, 'S80 T6 4dr'],
            ['Volvo', 'Wagon', 'Europe', 'Front', 170.0, 29.0, 'V40'],
            ['Volvo', 'Wagon', 'Europe', 'All', 208.0, 27.0, 'XC70']],
    % This ensures that we look for every car in our cars list
    findall(X, selectCar(Attributes, List, X), X).


selectCar(Attributes, List, CarName) :-
    member(Car, List),
    %if the car is a memeber of the cars list, we'll see if it matches the attributes listed
    carMatchesAttributes(Attributes, Car),
    %We want to get the Model Name by using the index function
    getCarAttribute('Model', Car, CarName).

carMatchesAttributes([], _).
%dealing with the numberical values, MPG and HP
carMatchesAttributes(['Horsepower', MinHP|As], Car) :-
    getCarAttribute('Horsepower', Car, HP),
    HP >= MinHP,
    carMatchesAttributes(As, Car).
carMatchesAttributes(['MPG', MinMPG|As], Car) :-
    getCarAttribute('MPG', Car, MPG),
    MPG =< MinMPG,
    carMatchesAttributes(As, Car).

%All nominal values
carMatchesAttributes([A|As], Car) :-
    member(A, Car),
    carMatchesAttributes(As, Car).


getCarAttribute(Attribute, Car, Value) :-
    nth0(Index, ['Make', 'Type', 'Origin', 'Drive', 'Horsepower', 'MPG', 'Model'], Attribute),
    nth0(Index, Car, Value).

takeInput(Attributes):-
    takeBrand(UpdatedList),
    takeType(UpdatedList, UpdatedList2),
    takeOrgin(UpdatedList2, UpdatedList3),
	takeDriveTrain(UpdatedList3, UpdatedList4),
	takeHorsePower(UpdatedList4, UpdatedList5),
	takeMPG(UpdatedList5, Attributes).
    
takeBrand(UpdatedList):-
    write('Do you want to search by Brand (y/n)'),
    read(Input),
    (Input = y ->  
        write('Write the Brand you would like to search by (Please incase in single quotes): '),
        nl,
		write( 'Acura, Audi, BMW, Buick, Cadillac, Chevrolet, Christler, Dodge, 
               Ford, GMC, Honda, Hyundai, Infiniti, Isuzu, Jaguar, Jeep, Kia, Land Rover, 
               Lexus, Lincoln, Mazda, Mercedes-Benz, Mercury, Mitsubishi, Nissan, Pontiac, 
               Saab, Saturn, Subaru, Toyota, Volkswagen, Volvo'),
     	read(Brand),
        (atom(Brand) ->  
        UpdatedList = [Brand]; 
        nl,
        write('Not an atom, try again'), nl,
            takeBrand(UpdatedList));
    	UpdatedList = []).

takeType(List, UpdatedList):-
    write('Do you want to search by Type (y/n)'),
    read(Input),
    (Input = y ->  
        write('Write the Type you would like to search by (Please incase in single quotes): '), nl,
    	write('Sedan, SUV, Truck, Hybrid, Sports, Wagon'),
     	read(Type),
        (atom(Type) ->  
        append(List, [Type], UpdatedList);
    	nl,
        write('Not an atom, try again'), nl,
            takeType(List, UpdatedList));
    	UpdatedList = List).

takeOrgin(List, UpdatedList):-
    write('Do you want to search by Origin (y/n)'),
    read(Input),
    (Input = y ->  
        write('Write the Origin you would like to search by (Please incase in single quotes): '), nl,
    	write('USA, Europe, Asia'),
     	read(Origin),
        (atom(Origin) ->  
        append(List, [Origin], UpdatedList);
        nl,
        write('Not an atom, try again'), nl,
            takeOrgin(List, UpdatedList));
    	UpdatedList = List).

takeDriveTrain(List, UpdatedList):-
    write('Do you want to search by Drive Train (y/n)'),
    read(Input),
    (Input = y ->  
        write('Write the Drive Train you would like to search by (Please incase in single quotes):'), nl,
        write('All, Front, Rear'),
     	read(DriveTrain),
        (atom(DriveTrain) ->  
        append(List, [DriveTrain], UpdatedList);
    	nl,
        write('Not an atom, try again'), nl,
            takeType(List, UpdatedList));
    	UpdatedList = List).

takeHorsePower(List, UpdatedList):-
    write('Do you want to search by Min Horse Power (y/n)'),
    read(Input),
    (Input = y ->  
        write('Write the HorsePower you would like to search by (Do not encase in quotes): '),
     	read(HorsePower),
        append(List, ['Horsepower', HorsePower], UpdatedList);
    	UpdatedList = List).

takeMPG(List, UpdatedList):-
    write('Do you want to search by Max MPG (y/n)'),
    read(Input),
    (Input = y ->  
        write('Write the Max MPG you would like to search by (Do not encase in quotes): '),
     	read(MPG),
        append(List, ['MPG', MPG], UpdatedList);
    	UpdatedList = List).

search :-
    takeInput(Attribute),
    car(Attribute, X),
	write(X),
    nl,
    write('Would you like to search again? (y/n)'),
    read(Input),
    (Input = y -> search; fail).
