/**
 * @file main.cpp
 * @author 3017477 Emre Yazar
 * @brief This is
 * @version 1.0
 * @date 2025-04-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream> //Importing necessary templates
#include <string> //
#include "Airplane.hpp" //Importing Airplane
#include "Airplane.cpp"
using namespace std;

int main()
{
    Airplane A380;
    A380.setName("Airbus A380");
    A380.setType("commercial");
    A380.setModel("A380");
    A380.setYear(2007);
    A380.setMaintenance(20241212);
    A380.setManufacturer("Airbus");
    A380.setMaxLoad(570000);
    A380.setMaxSpeed(550);
    A380.setSeatCapacity(853);
    A380.setAirline("Emirates");

    std::cout<<"\n\n Name: " << A380.getName() << "\n Type: " << A380.getType() << "\n Model: " << A380.getModel() << "\n Production Year: "<< A380.getYear() << "\n Last Maintanence (YYYY-MM-DD): " << A380.getMaintenance() << "\n Manufacturer: " << A380.getManufacturer() << "\n Maximum Load (kg): " << A380.getMaxLoad() << "\n Maximum Speed (knots): " << A380.getMaxSpeed() << "\n Seat Capacity: " << A380.getSeatCapacity() << "\n Airline: " << A380.getAirline() << std::endl;
    return 0;
}
