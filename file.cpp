#include "CarFactory.h"

int main() {
    CarFactory factory(5);

    Car* car = new Car("toyota", "corolla", 2020); // allocated on heap
    car->print();
    delete car; //deletes it from the heap
    // car->print(); //won't work, since deleted


    Car car2 = Car("toyota", "corolla", 2020);
    Car car3 = Car("honda", "crv", 2023);
    Car car4 = Car("mazda", "mx-5", 2002);
    Car car5 = Car("ford", "f150", 2004);

    factory.addCar(car2);
    factory.addCar(car3);
    factory.addCar(car4);
    factory.addCar(car5);

    factory.closeFactory();

    return 0;
}