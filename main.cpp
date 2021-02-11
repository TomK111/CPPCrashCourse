#include <iostream>

//enum EyeColor {Brown, Blue, Green, Grey, Other};
//float sum(float numberOne, float numberTwo);
//void introduceMe(std::string name, int age);
//void celebrateBirthday(int* age);
class Car {
private:
    std::string Color;
    double Price;
protected:
    bool isUnderMaintenance;
    std::string Name;
public:
    Car(std::string name, std::string color, double price) {
        Name = name;
        Color = color;
        Price = price;
        isUnderMaintenance = isUnderMaintenance;
    };

    void getCarInfo() {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Price: " << Price << std::endl;
        std::cout << "Color: " << Color << std::endl;
    }

    void crashCar() {
        std::cout << Name << " crashed" << std::endl;
        isUnderMaintenance = true;
    }

    void repairCar() {
        std::cout << Name << " is repaired." << std::endl;
        isUnderMaintenance = false;
    }

    void move() {
        if (isUnderMaintenance)
            std::cout << Name << " is broken" << std::endl;
        else
            std::cout << Name << " is driving fine" << std::endl;
    }
};

class UnderwaterCar : public Car { ;
public:
    UnderwaterCar(std::string name, std::string color, double price) : Car(name, color, price) {};

    void move() {
        if (isUnderMaintenance)
            std::cout << Name << " is broken" << std::endl;
        else
            std::cout << Name << " is gliding" << std::endl;
    }
};

class FlyingCar : public Car { ;
public:
    FlyingCar(std::string name, std::string color, double price) : Car(name, color, price) {};

    void move() {
        if (isUnderMaintenance)
            std::cout << Name << " is broken" << std::endl;
        else
            std::cout << Name << " is flying" << std::endl;
    }
};

int main() {
    Car myCar{"Ford", "Blue", 5000};
    Car myCar2{"BMW", "Red", 2000};

    FlyingCar flyingCar{"Sky Fury", "Black", 90000};
    UnderwaterCar underwaterCar("Sea Storm", "Light Blue", 100000);

    underwaterCar.move();
    flyingCar.move();

    int variable = 5;
    int *intPtr = &variable;
    std::cout << intPtr << std::endl;

    Car *car1 = &flyingCar;
    Car *car2 = &underwaterCar;

    car1->crashCar();
    car2->crashCar();
}

//---------------------------------------------------------//
//    myCar.getCarInfo();
//    myCar2.getCarInfo();
//
//    myCar.move();
//    myCar.crashCar();
//    myCar.move();
//    myCar.repairCar();
//    myCar.move();
//    int luckyNumbers[5] = {1,3,5,7,9};
//    std::cout << luckyNumbers << std::endl;
//    std::cout << &luckyNumbers[0] << std::endl;
//    std::cout << luckyNumbers[0] << std::endl;
//
//    int * luckyPointer  = luckyNumbers;
//    std::cout << "Pointing to " <<
//    luckyPointer<< " " << "value: "
//    << *luckyPointer << std::endl;
//    luckyPointer++;
//    std::cout << "Pointing to " << luckyPointer << ", value: " << *luckyPointer << std::endl;
//    int myAge = 25;
//    std::cout << "Before function: " << myAge << std::endl;
//    celebrateBirthday(&myAge);
//    std::cout << "After function: " << myAge << std::endl;
//    std::cout << "WHILE\n";
//    int counter = 1;
//    while (counter < 10) {
//        std::cout << counter << std::endl;
//        counter++;
//    }
//    std::cout << "---------------" << std::endl;
//    std::cout << "DO-WHILE\n";
//    int counter1 = 1;
//
//    do{
//        std::cout << counter1 << std::endl;
//        counter1++;
//    } while (counter1 <= 10);
//
//    std::cout << "FOR LOOP" << std::endl;
//    std::cout << "--------" << std::endl;
//    std::string animals[5] = {"cat", "dog", "rat", "horse", "pig"};
//    for(int i=0;i < 5; i++) {
//        std::cout << animals[i] << std::endl;
//    };

//    std::cout<<sum(2,5.2)<<std::endl;
//    std::cout<<sum(5,9)<<std::endl;
//    std::cout<<sum(30, 53.2)<<std::endl;
//    introduceMe("Tomislav", 23);
//    introduceMe("Elon", 40);

//
//float sum(float numberOne, float numberTwo){
//    return numberOne + numberTwo;
//};
//
//void introduceMe(std::string name, int age) {
//    std::cout << "My name is " << name << std::endl;
//    std::cout << "I am " << age << std::endl;
//}
//
//void celebrateBirthday(int* age) {
//    (*age)++;
//    std::cout << "YAYYYY, celebrated" << " " << *age << " birthday" << std::endl;
//}












//    EyeColor eyeColor = Blue;
//
//    switch(eyeColor) {
//        case Brown:
//            std::cout << "80% of people have brown eyes." << std::endl;
//            break;
//        case Blue:
//            std::cout << "10% of people have blue eyes." << std::endl;
//            break;
//        case Green:
//            std::cout << "2% of people have green eyes." << std::endl;
//            break;
//        case Grey:
//            std::cout << "1% of people have grey eyes" << std::endl;
//            break;
//        case Other:
//            std::cout << "Less than 1% have none of the colors chosen" << std::endl;
//            break;
//        default:
//            std::cout << "No valid color was chosen" << std::endl;
//            break;

//    std::cout << "Hello, World!" << std::endl;
//    std::cout << "Welcome to the C++ Crash Course" << std::endl;
//
//    int age = 25;
//    float weight = 65.5;
//    double price = 13.45;
//    char gender = 'm';
//    std::string firstName = "Tomislav";
//    std::string colors[5] = {"red", "green", "pink","blue", "black"};
//    std::cin >> colors[0];
//    std::cout << colors[0] << std::endl;
//    colors[1] = "grey";

//    std::cout << age << std::endl;
//    std::cout << weight << std::endl;
//    std::cout << price << std::endl;
//    std::cout <<gender << std::endl;
//    std::cout << firstName <<std::endl;
//    std::cout << isSunny << std::endl;
//    std::cout << colors[0] << std::endl;

//    bool isTodaySunny = false;
//    bool isTodayWeekend = false;
//
//    if(isTodayWeekend) {
//        if(isTodaySunny)
//            std::cout << "Go to the park." << std::endl;
//        else
//            std::cout << "Go to the park but take an umbrella" << std::endl;
//    }
//    else
//        std::cout << "Go to work!" << std::endl;

//    if (isTodaySunny && isTodayWeekend) {
//        std::cout << "Go to the park" << std::endl;
//    }
//    else if (isTodayWeekend && !isTodaySunny) {
//        std::cout << "Go to the park, but take an umbrella" << std::endl;
//    } else {
//        std::cout << "Go to work" << std::endl;
//    }

//    isSunny? std::cout << "Go to the park"  : "Take an umbrella!" << std::endl;







