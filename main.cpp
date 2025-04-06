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
#include "Airplane.hpp" //Importing Airplane
#include "Airplane.cpp"
using namespace std;

int main()
{
    Airplane A380;
    A380.setYear(2007);
    A380.setMaintenance(20241212);

    std::cout<<A380.getYear()<<A380.getMaintenance()<<std::endl;
    return 0;
}
