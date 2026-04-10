//
// Created by cmen on 2/8/26.
//

#ifndef DYNAMIC_MEMORY_DEMO_CARFACTORY_H
#define DYNAMIC_MEMORY_DEMO_CARFACTORY_H
#include "Car.h"
#endif //DYNAMIC_MEMORY_DEMO_CARFACTORY_H

class CarFactory {
    int MAX_SIZE;
    int curr_size;
    Car* inventory; //array of cars
public:
    CarFactory();
    CarFactory(int size) {
        this->MAX_SIZE = size;
        curr_size = 0;

        inventory = new Car[size]; //allocates array on heap
    }

    void addCar(Car car) {
        if (curr_size < MAX_SIZE) {
            inventory[curr_size] = car;
            curr_size++;
        }
    }

    //deletes all cars in the inventory
    void shipCars() {
        curr_size = 0; // overwrites the values of the cars
    }

    //deletes factory
    void closeFactory() {
        delete[] inventory;
        std::cout << "Factory is closed" << std::endl;
    }
};