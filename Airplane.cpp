#include "Airplane.hpp"
#include <iostream>
#include <string>
using namespace std;

Airplane::Airplane(){
    string name = "Plane"; //Constructing Name of the aircarft
    string type = "Type"; //Constructing Type of the aircraft
    int productionYear = 2000; //Constructing Production year of the aircraft
    int lastMaintenance = 20001122; //Constructing Last maintenance date in YYYYMMDD format
    string manufacturer = "Manu"; //Constructing Manufacturer of the aircraft
    double maxLoad = 1.0; //Constructing Maximum load of the aircraft in kg
    double maxSpeed = 1.0; //Constructing Maximum speed of the aircraft in knots
    int seatCapacity = 0; //Constructing Seat capacity of the aircraft
    string airline = "Charter"; //Constructing The airline that is currently operating the aircraft
}

void Airplane::setName(string newName){
    name = newName;
}

string Airplane::getName(){
    return name;
}

void Airplane::setType(string newType){
    type = newType;
}

string Airplane::getType(){
    return type;
}

void Airplane::setModel(string newModel){
    model = newModel;
}

string Airplane::getModel(){
    return model;
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

void Airplane::setManufacturer(string newManu){
    manufacturer = newManu;
}

string Airplane::getManufacturer(){
    return manufacturer;
}

void Airplane::setMaxLoad(double newMaxLoad){
    maxLoad = newMaxLoad;
}

double Airplane::getMaxLoad(){
    return maxLoad;
}

void Airplane::setMaxSpeed(double newMaxSpeed){
    maxSpeed = newMaxSpeed;
}

double Airplane::getMaxSpeed(){
    return maxSpeed;
}

void Airplane::setSeatCapacity(int newSeatCapacity){
    seatCapacity = newSeatCapacity;
}

int Airplane::getSeatCapacity(){
    return seatCapacity;
}

void Airplane::setAirline(string newAirline){
    airline = newAirline;
}

string Airplane::getAirline(){
    return airline;
}