#include "Airplane.hpp"
#include <iostream>

Airplane::Airplane(){
    productionYear = 0;
    lastMaintenance = 0;
}

void Airplane::setYear(int newYear){
    productionYear = newYear;
}

int Airplane::getYear(){
    return productionYear;
}

void Airplane::setMaintenance(int newMaintenance){
    lastMaintenance = newMaintenance;
}

int Airplane::getMaintenance(){
    return lastMaintenance;
}