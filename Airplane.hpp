#pragma once
using namespace std;
/**
 * Airplane class
 * @brief this class is for describing any airplane that is ever manufactured.
 */
class Airplane
{
    private:
        int productionYear;
        int lastMaintenance;


    protected:

    public:
        Airplane();
        void setYear(int newYear);
        int getYear();
        void setMaintenance(int newMaintenance);
        int getMaintenance();

};