#ifndef _OCCUPANCYMAPVEC_H
#define _OCCUPANCYMAPVEC_H
#include "OccupancyMapBase.h"
#include <vector>


class COccupancyMapHash: public COccupancyMapBase{
    public:
        std::string GetNameOfApproach();
        void AddOccupiedLocation(std::pair<int,int> Location);
        bool CheckIsOccupied( std::pair<int,int> Location );
    private:
        // std::unordered_map< std::pair<int,int> , int, pair_hash > map;


};


#endif
