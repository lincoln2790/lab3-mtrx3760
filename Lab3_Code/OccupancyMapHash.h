#ifndef _OCCUPANCYMAPHASH_H
#define _OCCUPANCYMAPHASH_H
#include "OccupancyMapBase.h"

class COccupancyMapHash: public COccupancyMapBase{
    public:
        std::string GetNameOfApproach(){
            std::string approach = "HashTable";
            return approach;
        }
        void AddOccupiedLocation(std::pair<int,int> Location){
            
        }
        bool CheckIsOccupied( std::pair<int,int> Location ){
            return false;
        }

};


#endif
