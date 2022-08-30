#ifndef _OCCUPANCYMAPVEC_H
#define _OCCUPANCYMAPVEC_H
#include "OccupancyMapBase.h"
#include <vector>


class COccupancyMapVec: public COccupancyMapBase{
    public:
        std::string GetNameOfApproach();
        void AddOccupiedLocation(std::pair<int,int> Location);
        bool CheckIsOccupied( std::pair<int,int> Location );
    private:
        // std::vector< std::vector<bool> > vec;
        std::vector<std::vector<bool> vec( 10 , std::vector<bool> (10, true)) > ; 


};


#endif
