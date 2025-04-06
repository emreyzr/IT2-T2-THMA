#pragma once
using namespace std;
/**
 * Airplane class
 * @brief this class is for describing any airplane that is ever manufactured.
 */
class Airplane //Class name
{
    private: 
    //Private attributes
        string name; //Name of the aircarft
        string type; //Type of the aircraft (commercial, fighter jet, private...)
        string model; //Model of the aircraft
        int productionYear; //Production year of the aircraft
        int lastMaintenance; //Last maintenance date in YYYYMMDD format
        string manufacturer; //Manufacturer of the aircraft
        double maxLoad; //Maximum load of the aircraft in kg
        double maxSpeed; //Maximum speed of the aircraft in knots
        int seatCapacity; //Seat capacity of the aircraft
        string airline; //The airline that is currently operating the aircraft


    protected:
    //Protected attributes

    public:
    //Public functions

        /**
         * @brief Construct a new Airplane object
         * 
         */
        Airplane();
        
        /**
         * @brief Set the Name object
         * 
         * @param newName 
         */
        void setName(string newName);

        /**
         * @brief Get the Name object
         * 
         * @return string 
         */
        string getName();

        /**
         * @brief Set the Type object
         * 
         * @param newType 
         */
        void setType(string newType);

        /**
         * @brief Get the Type object
         * 
         * @return string 
         */
        string getType();

        /**
         * @brief Set the Model object
         * 
         * @param newModel 
         */
        void setModel(string newModel);


        /**
         * @brief Get the Model object
         * 
         * @return string 
         */
        string getModel();

        /**
         * @brief Set the Year object
         * 
         * @param newYear 
         */
        void setYear(int newYear);
        
        /**
         * @brief Get the Year object
         * 
         * @return int 
         */
        int getYear();

        /**
         * @brief Set the Maintenance object
         * 
         * @param newMaintenance 
         */
        void setMaintenance(int newMaintenance);
        
        /**
         * @brief Get the Maintenance object
         * 
         * @return int 
         */
        int getMaintenance();

        /**
         * @brief Set the Manufacturer object
         * 
         * @param newManu 
         */
        void setManufacturer(string newManu);
        
        /**
         * @brief Get the Manufacturer object
         * 
         * @return string 
         */
        string getManufacturer();

        /**
         * @brief Set the Max Load object
         * 
         * @param newMaxLoad 
         */
        void setMaxLoad(double newMaxLoad);

        /**
         * @brief Get the Max Load object
         * 
         * @return double 
         */
        double getMaxLoad();

        /**
         * @brief Set the Max Speed object
         * 
         * @param newMaxSpeed 
         */
        void setMaxSpeed(double newMaxSpeed);

        /**
         * @brief Get the Max Speed object
         * 
         * @return double 
         */
        double getMaxSpeed();

        /**
         * @brief Set the Seat Capacity object
         * 
         * @param newSeatCapacity 
         */
        void setSeatCapacity(int newSeatCapacity);
        
        /**
         * @brief Get the Seat Capacity object
         * 
         * @return int 
         */
        int getSeatCapacity();

        /**
         * @brief Set the Airline object
         * 
         * @param newAirline 
         */
        void setAirline(string newAirline);
        
        /**
         * @brief Get the Airline object
         * 
         * @return string 
         */
        string getAirline();

        


};