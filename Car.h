#ifndef CAR_H // For some reason, the compiler lobster uses doesn't recognize pragma once
#define CAR_H

#include <string>
#include <iostream>

using namespace std;

class Car {
    string make;
    string model;
    int year;

public:
    Car(string make="Generic", string model="Generic", int year=2026) :
    make(make),
    model(model),
    year(year) {}

    void setMake(string make);
    void setModel(string model);
    void setYear(int year);

    void print();
};

void Car::setMake(string make) {
    this->make = make;
}

void Car::setModel(string model) {
    this->model = model;
}

void Car::setYear(int year) {
    this->year = year;
}

void Car::print() {
    cout << "Car! Make: " << make << " Model: " << model << " Year: " << year << endl;
}

#endif