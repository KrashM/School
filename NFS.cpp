#include<iostream>

class Vehicle{

    private: int horse_power;
    private: double fuel;

    protected: double fuel_consumtion = 1.25;

    public: Vehicle(int horse_power, double fuel){ this -> horse_power = horse_power; this -> fuel = fuel; }
    public: void Drive(double kilometers){ fuel -= kilometers * fuel_consumtion / 100; }
    public: double GetFuel() { return fuel; }
    public: void Print(){ std :: cout << horse_power << ' ' << fuel << ' ' << fuel_consumtion << '\n'; }

};

class Car: public Vehicle{

    public: Car(int horse_power, double fuel): Vehicle(horse_power, fuel){ fuel_consumtion = 3; }

};

class FamilyCar: public Car{

    public: FamilyCar(int horse_power, double fuel): Car(horse_power, fuel){  }

};

class SportCar: public Car{

    public: SportCar(int horse_power, double fuel): Car(horse_power, fuel){ fuel_consumtion = 10; }

};

class Motorcycle: public Vehicle{

    public: Motorcycle(int horse_power, double fuel): Vehicle(horse_power, fuel){  }

};

class RaceMotorcycle: public Motorcycle{

    public: RaceMotorcycle(int horse_power, double fuel): Motorcycle(horse_power, fuel){ fuel_consumtion = 8; }

};

class CrossMotorcycle: public Motorcycle{

    public: CrossMotorcycle(int horse_power, double fuel): Motorcycle(horse_power, fuel){  }

};

int main(){

    Vehicle myVehicle(100, 200);
    Car myCar(156, 284);
    FamilyCar myFamilyCar(156, 784);
    SportCar mySportCar(406, 1651);
    Motorcycle myMotorcycle(56, 325);
    CrossMotorcycle myCrossMotorcycle(156, 614);
    RaceMotorcycle myRaceMotorcycle(350, 546);

    myVehicle.Drive(1000);
    myCar.Drive(500);
    myFamilyCar.Drive(200);
    mySportCar.Drive(234);
    myMotorcycle.Drive(590);
    myCrossMotorcycle.Drive(600);
    myRaceMotorcycle.Drive(105);

    myVehicle.Print();
    myCar.Print();
    myFamilyCar.Print();
    mySportCar.Print();
    myMotorcycle.Print();
    myCrossMotorcycle.Print();
    myRaceMotorcycle.Print();

}
